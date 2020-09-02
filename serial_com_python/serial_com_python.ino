#include <Servo.h>
char serialData;
Servo myServo;
const int servoPin = 6;




void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:


  if(Serial.read() =='1'){
    myServo.write(180);
  }
  if(Serial.read() == '0'){
    myServo.write(0);
  }
  
}
