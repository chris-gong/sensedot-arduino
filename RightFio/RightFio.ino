#include "MotorControls.h"
MotorControls rightLilyPad(3);
bool on = false;

int bufferSize = 100;
byte readBuffer[100];
byte lastByte = 0;

void setup(){
  //SERIAL1 NOT SERIAL
  //SERIAL1 FOR FIO V3, SERIAL FOR ARDUINO LILYPAD
  Serial1.begin(57600);
  
}

void loop(){
  
  int toRead = Serial1.available();
  if(toRead > 0){
    while(toRead > bufferSize){
      Serial1.readBytes(readBuffer, bufferSize);
      toRead = toRead - bufferSize;
    }

    Serial1.readBytes(readBuffer, toRead);
    lastByte = readBuffer[toRead - 1];
    
  }
  
  if(lastByte & 1){
    rightLilyPad.triggerMotor(false, rightLilyPad.getMotor(), 255, 250);
    
 
  }   
  else {
    rightLilyPad.triggerMotor(true, rightLilyPad.getMotor(), 255, 250);
   
  }
  
   delay(10);
}

