/ Potek Library by Ourniti /

Arduino library for faster potentiometer instantiation with output value mapping and smoothing.

Howto example.

1.) Create a potentiometer object for pin A0  
2.) Set output value for example from 0 to 255.                      
3.) Set the parameter to True or False.
When set to True. The library inverts the output values. For example, from 255 to 0.                         
4.) The last value representing the smoothing value, if set to "0", then smoothing does not occur and the output values ​​can jump between 2 or 3 output digits. To smooth the output, set more than "0" and the output signal ignores small changes less than the setting value.

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
