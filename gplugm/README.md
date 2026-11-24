# gPlugM build with Matter power

Tasmota 14.5.0.1 for the gPlugM smart-meter reader (ESP32-C3, 4 MB, no PSRAM, safeboot layout). The meter's live power shows as a Matter outlet in Apple Home.

The branch adds these changes on top of upstream 14.5.0.1 (`2e35a2ab9`):

- The `relay_power` / `v_relay_power` Matter plugin (Electrical Power Measurement cluster 0x0090), backported from v16.0.0.
- A fix for the Matter mDNS hostname: link-local IPv6 addresses carry a zone suffix (`%st1`), which made `mdns.add_hostname` fail, so controllers could not resolve the device.
- The operational record is announced before the AddNOC reply. Otherwise the controller's first lookup goes unanswered while esp mdns probes the new service, and it then waits for a 45 s timeout, which makes Apple Home abort at the Apple Keychain fabric.
- Expired candidate fabrics remove their mDNS record.

It stays on 14.5 because the v16 Scripter crashes at boot on the gPlugM SML script (`free(strings_op)` in `Init_Scripter()`).

## Build

Copy the two config files into place, then build `tasmota32c3`. PlatformIO Core 6.1.16 or newer is required.

```bash
cp gplugm/user_config_override.h tasmota/
cp gplugm/platformio_override.ini .
pio run -e tasmota32c3
```

The image is `build_output/firmware/tasmota32c3.bin`. Flash it OTA (`OtaUrl` + `Upgrade 1`) or over USB at `0xe0000`, which leaves settings and the filesystem in place.

The build enables Scripter with SML and DLMS decryption (`USE_SCRIPT`, `USE_SML_M`, `USE_SML_DECRYPT`, `SML_REPLACE_VARS`) in place of Rules. Matter and Berry come from the `tasmota32` defaults.

After changing any Matter `.be` file, regenerate `lib/libesp32/berry_matter/src/solidify/` with a host `berry` built from this tree: in `lib/libesp32/berry_matter`, run `../berry/berry -s -g solidify_all.be`. The tracked `berry.exe` is stale and produces different bytecode.

## Device setup

1. Enable Matter: `SetOption151 1`, then restart.
2. Create the endpoints from the Berry console: `<DeviceName> power` for the total, and `<DeviceName> L1`, `<DeviceName> L2`, `<DeviceName> L3` for the phases. Each phase gets its own outlet tile in Apple Home, and an already paired bridge picks up new endpoints without re-pairing:

   ```berry
   matter_device.bridge_add_endpoint('v_relay_power', {'name':'Rez power'})
   matter_device.bridge_add_endpoint('v_relay_power', {'name':'Rez L1'})
   matter_device.bridge_add_endpoint('v_relay_power', {'name':'Rez L2'})
   matter_device.bridge_add_endpoint('v_relay_power', {'name':'Rez L3'})
   ```

3. Upload `matter_power.be` and add `load('matter_power.be')` to `autoexec.be`.
4. Pair from Apple Home with the code on the Matter configuration page. The "uncertified accessory" warning is expected, because Tasmota uses the test vendor ID 0xFFF1.

`matter_power.be` does two jobs:

- Every 5 s it sends the total endpoint the net import power (`Pi - Pe`, negative while exporting), the mean voltage and the summed current of the three phases, and each phase endpoint its own net power (`PiLn - PoLn`), voltage and current. A missing endpoint only makes its update fail.
- Every 5 min, and 60 s after boot, it re-registers the Matter hostname and the operational `_matter._tcp` records. The meter script turns on `SetOption55`, and Tasmota's mDNS start calls `MDNS.end()`, which wipes the records Matter registered a second earlier.

Do not query heap statistics (`tasmota.memory()`, `Status 4`) while a controller is commissioning the device. Walking the heap during commissioning crashed the device.

## Limits

- Apple Home shows the watts only on outlet tiles, from iOS 27. The tile's on/off switch has no effect.
- There is no kWh total, because the plugin has no Electrical Energy Measurement cluster (0x0091).
