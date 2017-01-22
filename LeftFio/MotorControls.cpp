#include "Arduino.h"
#include "MotorControls.h"

MotorControls::MotorControls(int m){
	motor = m;
        pinMode(motor, OUTPUT);
}

void MotorControls::triggerMotor(bool on, int motorNum, int intensity, int duration){
	if(on){
              analogWrite(motorNum, 0);
              
        }
  else{
              
              analogWrite(motorNum, intensity);
             
              
              
        }
	//delay(duration);
	//analogWrite(motorNum, 0);
}

void MotorControls::vibrate(bool left, bool right, bool center, int lint, int rint, int cint, int duration){
	
}

int MotorControls::getMotor(){
       return motor; 
}

