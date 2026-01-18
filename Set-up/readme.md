# Setup Configuration

This folder contains all user-editable configuration files required
to run the ESP32 Radar System.

If the system does not work, check this folder first.

## Files

### config.h
Main configuration file.
You MUST edit this before compiling.

Includes:
- GPIO pin definitions
- Radar sweep parameters
- WiFi credentials
- Debug options

### config.example.h
Safe template file.
Copy this to `config.h` before use.

### validation.h
Compile-time checks to ensure configuration sanity.
Included automatically by the main sketch.

### pins.md
Hardware wiring reference for ESP32 components.

## Common Mistakes

- Forgetting to update WiFi credentials
- Powering servo directly from ESP32
- Using GPIO pins reserved for boot
- Editing source code instead of config.h

This project assumes discipline.
Act accordingly.
