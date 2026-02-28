#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author aarushi07-tech
 * @date  2026-02-20
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 */

const int PIN_RED   = 5;
const int PIN_GREEN = 6;
const int PIN_BLUE  = 9;
void setup() {
    pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);


}

void loop() {
    // color code #00C9CC (R = 0,   G = 201, B = 204)
  analogWrite(PIN_RED,   0);
  analogWrite(PIN_GREEN, 201);
  analogWrite(PIN_BLUE,  204);

  delay(1000); // keep the color 1 second

  // color code #F7788A (R = 247, G = 120, B = 138)
  analogWrite(PIN_RED,   247);
  analogWrite(PIN_GREEN, 120);
  analogWrite(PIN_BLUE,  138);

  delay(1000); // keep the color 1 second

  // color code #34A853 (R = 52,  G = 168, B = 83)
  analogWrite(PIN_RED,   52);
  analogWrite(PIN_GREEN, 168);
  analogWrite(PIN_BLUE,  83);

  delay(1000); // keep the color 1 second

    // -------- DIGITAL MODE --------

    // TODO 7:
    // Turn ON red (digital HIGH)

    // TODO 8:
    // Turn OFF red

    // -------- ANALOG (PWM) MODE --------

    // TODO 9:
    // Set RED brightness using analogWrite()

    // TODO 10:
    // Set GREEN brightness using analogWrite()

    // TODO 11:
    // Set BLUE brightness using analogWrite()

    // TODO 12:
    // Add delay for visible transition
}
