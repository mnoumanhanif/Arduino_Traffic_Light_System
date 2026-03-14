/*
 * Traffic Light System - Arduino UNO
 *
 * Simulates a standard traffic light cycle using three LEDs:
 *   Red    -> Arduino Pin 2
 *   Yellow -> Arduino Pin 4
 *   Green  -> Arduino Pin 6
 *
 * Cycle: Red (3s) -> Yellow (1.5s) -> Green (3s) -> Yellow (1.5s) -> repeat
 *
 * Each LED is connected through a 220 ohm resistor to GND.
 *
 * Reference: https://pimylifeup.com/arduino-traffic-light-project/
 */

// --- Pin assignments ---
const int RED_LED_PIN    = 2;
const int YELLOW_LED_PIN = 4;
const int GREEN_LED_PIN  = 6;

// --- Timing constants (milliseconds) ---
const int RED_DURATION    = 3000;
const int YELLOW_DURATION = 1500;
const int GREEN_DURATION  = 3000;

// --- Arduino setup: configure LED pins as outputs ---
void setup() {
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(GREEN_LED_PIN, OUTPUT);
}

// --- Main loop: cycle through traffic light states ---
void loop() {
  showRed();
  delay(RED_DURATION);

  showYellow();
  delay(YELLOW_DURATION);

  showGreen();
  delay(GREEN_DURATION);

  showYellow();
  delay(YELLOW_DURATION);
}

// --- Light state functions ---

void showRed() {
  digitalWrite(RED_LED_PIN, HIGH);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, LOW);
}

void showYellow() {
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, HIGH);
  digitalWrite(GREEN_LED_PIN, LOW);
}

void showGreen() {
  digitalWrite(RED_LED_PIN, LOW);
  digitalWrite(YELLOW_LED_PIN, LOW);
  digitalWrite(GREEN_LED_PIN, HIGH);
}
