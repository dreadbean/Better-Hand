 
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

int incomingdata=0;

// called this way, it uses the default address 0x40

// you can also call it with a different address you want
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

// Depending on your servo make, the pulse width min and max may vary, you 
// want these to be as small/large as possible without hitting the hard stop
// for max range. You'll have to tweak them as necessary to match the servos you
// have!
#define SERVOMIN  125 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  4096 // this is the 'maximum' pulse length count (out of 4096)

// our servo # counter


void setup() {
Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(900);  
}

// the code inside loop() has been updated by Robojax
void loop() {
if (Serial.available()>0){
  incomingdata = Serial.read();
  
}

if(incomingdata == '1'){
void finger_opened();
}

}
