# matter_power.be - feed the SML meter readings into a Matter v_relay_power endpoint
#
# Needs the v_relay_power Matter plugin (Tasmota >= 16.0.0, or the 14.5 backport
# in D:\Development\tasmota-gplug145) and a Matter endpoint of type
# "v_relay_power" named ENDPOINT below. Load from autoexec.be:
#   load('matter_power.be')
#
# SML values sit under an empty sensor name in tasmota.read_sensors():
#   {"":{"Pi":53,"Pe":0,"U1":235,"I1":0.25,...}}

var ENDPOINT = nil       # "<DeviceName> power", e.g. "Common power"; resolved on first tick
                         # (tasmota.cmd is not usable yet while autoexec.be runs at boot)

def matter_power_push()
  import json
  if ENDPOINT == nil
    var r = tasmota.cmd("DeviceName", true)
    if r == nil || r.find("DeviceName") == nil return end
    ENDPOINT = r["DeviceName"] + " power"
  end
  var s = tasmota.read_sensors()
  if s == nil return end
  var j = json.load(s)
  if j == nil return end
  var m = j.find("")
  if m == nil || m.find("Pi") == nil return end
  var pe = m.find("Pe", 0)
  var p = real(m["Pi"]) - real(pe)                       # net import, negative while exporting
  var u = (real(m.find("U1", 0)) + real(m.find("U2", 0)) + real(m.find("U3", 0))) / 3
  var i = real(m.find("I1", 0)) + real(m.find("I2", 0)) + real(m.find("I3", 0))
  var cmd = format('MtrUpdate {"Name":"%s","Power":1,"ActivePower":%.1f,"Voltage":%.1f,"Current":%.2f}', ENDPOINT, p, u, i)
  tasmota.cmd(cmd, true)
end

tasmota.remove_cron("matter_power")
tasmota.add_cron("*/5 * * * * *", matter_power_push, "matter_power")

# Matter mDNS hostname refresh.
# On this build the delegated Matter hostname (MAC without colons, e.g.
# B08184251D00.local) ends up with no address records after boot, although
# the _matterc/_matter PTR and SRV records exist, so controllers cannot
# resolve the device (pairing hangs at "connecting", and after a reboot or IP
# change Apple Home cannot find it). Re-adding the hostname with the IPv6 zone
# suffix stripped fixes it at once; mdns.start() must not be called again.
def matter_mdns_refresh()
  import global
  import mdns
  import string
  if !global.contains("matter_device") || global.matter_device == nil return end
  var c = global.matter_device.commissioning
  var w = tasmota.wifi()
  if c.hostname_wifi == nil || !w.find("up", false) return end
  try
    if global.matter_device.ipv4only
      mdns.add_hostname(c.hostname_wifi, w.find("ip", ""))
    else
      mdns.add_hostname(c.hostname_wifi, string.split(w.find("ip6local", ""), "%")[0], w.find("ip", ""), w.find("ip6", ""))
    end
  except .. as e, m
    log("MTR: hostname refresh: " + str(e) + " " + str(m), 4)   # expected once the host exists
  end
  # operational records (_matter._tcp per fabric) are missing after boot on this build;
  # re-announcing an existing one only logs an exception inside Matter
  c.mdns_announce_op_discovery_all_fabrics()
end

tasmota.set_timer(60000, matter_mdns_refresh)
tasmota.remove_cron("matter_mdns")
tasmota.add_cron("0 */5 * * * *", matter_mdns_refresh, "matter_mdns")
