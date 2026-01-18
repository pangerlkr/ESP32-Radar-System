#ifndef CONFIG_H
#define CONFIG_H

// -------- Hardware Configuration --------
#define TRIG_PIN 5
#define ECHO_PIN 18
#define SERVO_PIN 13

// -------- Radar Parameters --------
#define SCAN_MIN_ANGLE 15
#define SCAN_MAX_ANGLE 165
#define SCAN_STEP 2
#define SERVO_DELAY_MS 20

// -------- Distance Filtering --------
#define FILTER_WINDOW_SIZE 5

// -------- WiFi Configuration --------
#define WIFI_SSID "ESP32-Radar"
#define WIFI_PASSWORD "12345678"

#endif
