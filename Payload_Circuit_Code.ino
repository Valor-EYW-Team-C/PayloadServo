#include <EYW.h>
#include <Servo.h>
#include <Wire.h>

#include <EYW.h> 
EYW:: Camera PayloadServo; 



void setup() {
  // put your setup code here, to run once:
PayloadServo.begin();
PayloadServo.calibrate();
PayloadServo.alarm();
PayloadServo.beginTimer(10000); 

}

void loop() 
  // put your main code here, to run repeatedly:
{
if (PayloadServo.timerExpired()==true || PayloadServo.buttonPressed()==true)
 {
 PayloadServo.getPicture(); 
 PayloadServo.beginTimer(5000);
 }



}

