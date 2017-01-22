#ifndef MotorControls_h
#define MotorControls_h

#include "Arduino.h"

class MotorControls{
	public:
	MotorControls(int m);
	void triggerMotor(bool on, int motorNum, int intensity, int duration);
	void vibrate(bool left, bool right, bool center, int lint, int rint, int cint, int duration);
        int getMotor();
	

	private:
	int motor;
       

};

#endif
