
#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object
int num=0; 

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {11, 9, 10, 8};
  byte segmentPins[] = {0, 1, 2, 3, 4, 5, 6, 7};
  bool resistorsOnSegments = false; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_CATHODE; // See README.md for options
  bool updateWithDelays = true; // Default. Recommended
  bool leadingZeros = true; // Use 'true' if you'd like to keep the leading zeros
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros);
  sevseg.setBrightness(90);
}

void loop() {        
  if(num>10000){
    num=0;
    }  
  sevseg.setNumber(num);
  sevseg.refreshDisplay();

  num++;
  delay(0);
}

/// END ///
