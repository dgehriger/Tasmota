#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// gPlugM (ESP32-C3) meter reader: Scripter + SML with DLMS decryption, plus Berry and Matter (default in tasmota32)
#undef  USE_RULES
#define USE_SCRIPT
#define USE_SCRIPT_WEB_DISPLAY
#define USE_SCRIPT_JSON_EXPORT
#define SCRIPT_POWER_SECTION
#define USE_SML_M
#define USE_SML_DECRYPT
#define USE_SML_SCRIPT_CMD
#define SML_REPLACE_VARS

#undef  OTA_URL
#define OTA_URL ""

#endif  // _USER_CONFIG_OVERRIDE_H_
