/*
 * Lean Button LED
 * 
 * Connect an LED and a suitable current-limiting resistor
 * between Pin 13 and GND. Or use the built-in LED. Up to you.
 * 
 * Connect a push button between 5V and Pin 7. Use a 10k Ohm 
 * pull-down resistor.
 * 
 * The LED will light when the button is pressed.
 * 
 * Created by Adam Corrie on 27/07/2019
 * Licensed under the GNU General Public License v3.0
 * 
 */

#define buttonPin 7 // define buttonPin as Pin 7
#define ledPin 13 // define ledPin as Pin 13

void setup() {
  pinMode(buttonPin, INPUT); // configure buttonPin as an INPUT pin
  pinMode(ledPin, OUTPUT); // configure ledPin as an OUTPUT pin
}

void loop() {
  // send the button state directly to the LED
  digitalWrite(ledPin, digitalRead(buttonPin));
}
