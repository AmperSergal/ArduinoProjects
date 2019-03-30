
#include <Strela.h>
#include <Wire.h>

void setup() {
  // put your setup code here, to run once:

  motorConnection(1, 0);
}

void loop() {
  // put your main code here, to run repeatedly: Harry Potter Y

  drive(127,-127);
  delay(300);
  drive(-127,127);
  delay(300);
  drive(127,127);
  delay(200);
  drive(-127,-127);
  delay(200);
}
