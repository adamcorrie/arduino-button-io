/*
 * Toggle Button LED
 * 
 * Connect an LED and a suitable current-limiting resistor
 * between Pin 13 and GND. Or use the built-in LED. Up to you.
 * 
 * Connect a push button between 5V and Pin 7. Use a 10k Ohm 
 * pull-down resistor.
 * 
 * The LED will toggle on and off when the button is pressed.
 * 
 * Created by Adam Corrie on 27/07/2019
 * Licensed under the GNU General Public License v3.0
 * 
 */

#define buttonPin 7 // define buttonPin as Pin 7
#define ledPin 13 // define ledPin as Pin 13

int previousButtonState; // variable to store previous button state
int ledToggleState; // variable to store current toggle state

void setup() {
  pinMode(buttonPin, INPUT); // configure buttonPin as an INPUT pin
  pinMode(ledPin, OUTPUT); // configure ledPin as an OUTPUT pin
  previousButtonState = LOW; // initialise the variable; LOW is a logical 0
  ledToggleState = LOW; // initialise the variable; LOW is a logical 0
}

void loop() {
  // check button state and store in local variable
  int currentButtonState = digitalRead(buttonPin);
  // check if the button has just been pressed
  if ((previousButtonState == LOW) && (currentButtonState == HIGH)) {
    ledToggleState = !ledToggleState; // set the current toggle state to the opposite value
    digitalWrite(ledPin, ledToggleState); // set the LED to this new state
    delay(50); // debounce the button with a 50ms delay
  }
  // store current button state for next cycle
  previousButtonState = currentButtonState;
}
