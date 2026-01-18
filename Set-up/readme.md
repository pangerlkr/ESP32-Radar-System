# Setup Configuration

This folder contains all user-editable configuration files.

## Fileshttps://github.com/pangerlkr/ESP32-Radar-System/tree/main/Set-up

### config.h
Used to configure:
- GPIO pin mapping
- Radar sweep parameters
- WiFi credentials
- Debug options

⚠️ Edit this file before uploading the firmware.

## Common Mistakes
- Forgetting to change WiFi credentials
- Using GPIO pins that conflict with ESP32 boot pins
- Powering servo directly from ESP32 (do not)

If something breaks, check config.h first.
