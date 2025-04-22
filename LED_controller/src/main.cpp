#include <Arduino.h>
#define LED_PIN_1 9
#define LED_PIN_2 10
#define MODE_BLINK 0
#define MODE_FADE  1
#define BUTTON_PIN 3 // Example: connect a button to digital pin 3

int mode = MODE_FADE;

void blinkLEDs();
void fadeLED();

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Button with pull-up resistor
}

void loop() {
  // Check button press to toggle mode
  static int lastButtonState = HIGH;
  int buttonState = digitalRead(BUTTON_PIN);
  if (buttonState == LOW && lastButtonState == HIGH) { // Button pressed
    mode = (mode == MODE_BLINK) ? MODE_FADE : MODE_BLINK;
    delay(300); // Debounce delay
  }
  lastButtonState = buttonState;

  if (mode == MODE_BLINK) {
    blinkLEDs();
  } else if (mode == MODE_FADE) {
    fadeLED();
  }
}

void blinkLEDs() {
  digitalWrite(LED_PIN_1, HIGH);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(LED_PIN_2, LOW);    // turn the LED off by making the voltage LOW
  delay(500);             // wait for a second

  digitalWrite(LED_PIN_1, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(LED_PIN_2, HIGH);    // turn the LED off by making the voltage LOW
  delay(500);             // wait for a second
}

void fadeLED() {
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(LED_PIN_1, brightness); // increase brightness on LED 1
    analogWrite(LED_PIN_2, brightness); // increase brightness on LED 2
    delay(10); // wait for 10ms
  }
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(LED_PIN_1, brightness); // decrease brightness on LED 1
    analogWrite(LED_PIN_2, brightness); // decrease brightness on LED 2
    delay(10); // wait for 10ms
  }
}