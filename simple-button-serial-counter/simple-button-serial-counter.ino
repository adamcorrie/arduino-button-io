/*
 * Simple Button Serial Counter
 * 
 * Connect a push button between 5V and Pin 7. Use a 10k Ohm 
 * pull-down resistor.
 * 
 * Messages will be sent to the serial console when the button 
 * is pressed.
 * 
 * Created by Adam Corrie on 27/07/2019
 * Licensed under the GNU General Public License v3.0
 * 
 */

#define buttonPin 7 // define buttonPin as Pin 7

int buttonCounter; // variable to store button press counter

void setup() {
  pinMode(buttonPin, INPUT); // configure buttonPin as an INPUT pin
  buttonCounter = 0; // initialise the variable
  Serial.begin(9600); // start serial communication at 9,600 baud
}

void loop() {
  // check if the button state is HIGH
  if (digitalRead(buttonPin) == HIGH) {
    buttonCounter++; // increment the counter value
    // send a message to the serial port
    Serial.print("Button pressed ");
    Serial.print(buttonCounter);
    Serial.println(" times!");
  }
}
