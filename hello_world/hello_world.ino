#include <Servo.h>

Servo myservo;

int pos = 0;  // variable to store the servo position

int servoOutputPin = 9;

void setup() {
  myservo.attach(servoOutputPin);
for(pos = 0; pos <= 240; pos +=1)
  {
    myservo.write(pos);
    delay(150);
  }
  for(pos = 180; pos >= 0; pos -=1)
  {
    myservo.write(pos);
    delay(150);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  // for(pos = 0; pos <= 180; pos +=1)
  // {
  //   myservo.write(pos);
  //   delay(15);
  // }
  // for(pos = 180; pos >= 0; pos -=1)
  // {
  //   myservo.write(pos);
  //   delay(15);
  // }
}
