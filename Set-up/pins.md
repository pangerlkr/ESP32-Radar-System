# ESP32 Pin Mapping Reference

## Ultrasonic Sensor (HC-SR04)

| Signal | ESP32 GPIO |
|------|-----------|
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |
| VCC  | 5V (external recommended) |
| GND  | GND |

## Servo Motor (SG90 / MG90)

| Signal | ESP32 GPIO |
|-------|-----------|
| Signal | GPIO 13 |
| Power  | External 5V |
| Ground | Common GND |

## Critical Notes

- DO NOT power servo directly from ESP32 5V pin
- Always share ground between ESP32 and external power
- Avoid ESP32 boot pins (GPIO 0, 2, 15)
