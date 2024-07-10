/*This enables the joystick control using the arduino joystick.
Wiring: 
GND -> GND
5V -> 5V
VRx -> Analog Pin
VRy -> Analog Pin
SW -> Digital Pin
Max values for x/y coordinates are 1021 and the min value are 502.
*/
#include <Arduino.h>
#include <Stepper.h>
int xValue = analogRead(A5);
int yValue = analogRead(A4);
int x_pin = A4;
int y_pin = A5;

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  // read analog X and Y analog values
  xValue = analogRead(x_pin);
  yValue = analogRead(y_pin);

  // print data to Serial Monitor on Arduino IDE, can do many other things!
  Serial.print("x = ");
  Serial.print(xValue);
  Serial.print(", y = ");
  Serial.println(yValue);
  delay(200);
}
