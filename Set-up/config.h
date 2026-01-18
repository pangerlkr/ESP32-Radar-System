#ifndef CONFIG_H
#define CONFIG_H

// =====================
// Hardware Configuration
// =====================
#define TRIG_PIN 5
#define ECHO_PIN 18
#define SERVO_PIN 13

// =====================
// Radar Parameters
// =====================
#define MAX_DISTANCE_CM 200
#define SERVO_MIN_ANGLE 0
#define SERVO_MAX_ANGLE 180
#define SERVO_STEP 1

// =====================
// WiFi Configuration
// =====================
#define WIFI_SSID "YOUR_WIFI_NAME"
#define WIFI_PASSWORD "YOUR_WIFI_PASSWORD"

// =====================
// Debug Configuration
// =====================
#define ENABLE_SERIAL_DEBUG true
#define SERIAL_BAUDRATE 115200

#endif
