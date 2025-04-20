#include <Arduino.h>

void setup() {
  // declare pin 9 to be an output:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(500);             // wait for a second

  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)  
  digitalWrite(9, HIGH);    // turn the LED off by making the voltage LOW
  delay(500);             // wait for a second
}