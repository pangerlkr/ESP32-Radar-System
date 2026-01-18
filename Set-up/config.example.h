#ifndef CONFIG_H
#define CONFIG_H

// ==================================================
// COPY THIS FILE TO `config.h` BEFORE COMPILING
// ==================================================

// Ultrasonic Sensor
#define TRIG_PIN 5
#define ECHO_PIN 18

// Servo Motor
#define SERVO_PIN 13

// Radar Behaviour
#define SERVO_MIN_ANGLE 0
#define SERVO_MAX_ANGLE 180
#define SERVO_STEP_ANGLE 1
#define MAX_DISTANCE_CM 200
#define RADAR_DELAY_MS 15

// WiFi Configuration
#define WIFI_SSID "CHANGE_ME"
#define WIFI_PASSWORD "CHANGE_ME"

// Serial Debug
#define SERIAL_BAUDRATE 115200
#define ENABLE_SERIAL_DEBUG true

#define ENABLE_SERVO true

#endif
