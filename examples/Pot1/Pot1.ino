//Potentiometer Library by Ourniti
//Library for quicker creating potentiometer instance with mapping values and smoothing output.

#include <potek.h>

potek pot1(A0, 0, 255, false, 2);  

// Create a potentiometer object for pin A0  
//set value from 0 to 255 
//true is inverting values from 0-255 to 255-0
//last value representing smoothing value

void setup() {
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int p1 = pot1.read(); // Read the value of potentiometer p1
  Serial.print("Potentiometer 1 = ");
  Serial.println(p1);
  delay(100); // Wait for a short time
}