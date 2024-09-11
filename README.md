# Potek
         ------Potek Library by Ourniti------
A library for faster potentiometer instantiation with output value mapping and smoothing.

Howto example.

Create a potentiometer object for pin A0  
Set output value for example from 0 to 255.
True or False para,.
When set True. Library is inverting output values. For example 255 to 0.
Last value representing smoothing value if set "0" is no smoothing and values can jump between 2 or 3 outpyt digits.
To smooth output set more than "0" and output signal ignore small changes smaller than setup value.
         
#include <potek.h>
potek pot1(A0, 0, 255, false, 2); 

void setup() {
         Serial.begin(9600); // Start serial communication for debugging
         }
         
void loop() {
  int p1 = pot1.read(); // Read the value of potentiometer p1
  Serial.print("Potentiometer 1 = ");
  Serial.println(p1);
  delay(100); // Wait for a short time
}
