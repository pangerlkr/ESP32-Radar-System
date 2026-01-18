#pragma once

#ifndef CONFIG_H
#error "config.h is missing. Please configure the project before compiling."
#endif

// Pin sanity checks
#if TRIG_PIN < 0 || ECHO_PIN < 0
#error "Ultrasonic sensor pins are not defined correctly."
#endif

#if ENABLE_SERVO
  #if SERVO_PIN < 0
  #error "SERVO_PIN is enabled but not defined."
  #endif
#endif

// Angle sanity
#if SERVO_MIN_ANGLE < 0 || SERVO_MAX_ANGLE > 180
#error "Servo angles must be between 0 and 180 degrees."
#endif

#if SERVO_MIN_ANGLE >= SERVO_MAX_ANGLE
#error "SERVO_MIN_ANGLE must be less than SERVO_MAX_ANGLE."
#endif

// Distance sanity
#if MAX_DISTANCE_CM <= 0
#error "MAX_DISTANCE_CM must be greater than zero."
#endif
