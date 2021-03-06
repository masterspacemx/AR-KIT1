#include "pitches.h"
int melody[] = {
 NOTE_C6, NOTE_D6,NOTE_E6, NOTE_F6, NOTE_G6,0, NOTE_E6, NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
 NOTE_F6,0, NOTE_D6, NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
 NOTE_G5,0,NOTE_C6,0,NOTE_F6,0,NOTE_E6,NOTE_G6,NOTE_C6,0,
 NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_D6,0,
 NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
 NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
 NOTE_A5,0,NOTE_A6,0,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_C6,NOTE_C6,0,
 NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_A6,NOTE_G6,0,
 NOTE_G5,NOTE_G5,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_C6,0,0,

 NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G5,0,
 NOTE_C6,NOTE_B5,NOTE_C6,NOTE_E6,0,
 NOTE_F6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_F6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_C6,NOTE_D6,NOTE_D6,0,
 NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G5,0,
 NOTE_C6,NOTE_B5,NOTE_C6,NOTE_G6,0,
 NOTE_F6,NOTE_F6,NOTE_F6,NOTE_F6,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_F6,0,
 NOTE_C6,NOTE_D6,NOTE_F6,NOTE_E6,NOTE_E6,NOTE_E6,NOTE_D6,NOTE_C6,NOTE_E6,0,
 NOTE_A5,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_A5,NOTE_A5,NOTE_B5,NOTE_C6,NOTE_D6,NOTE_C6,NOTE_G6,0,

 NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
 NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
 NOTE_G5,0,NOTE_C6,0,NOTE_F6,0,NOTE_E6,NOTE_G6,NOTE_C6,0,
 NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_D6,0,
 NOTE_C6,NOTE_D6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_E6,NOTE_C6,0,NOTE_G6,0,NOTE_F6,NOTE_D6,0,
 NOTE_F6,0,NOTE_D6,NOTE_B5,0,NOTE_F6,0,NOTE_E6,NOTE_C6,0,
 NOTE_A5,0,NOTE_A6,0,NOTE_G6,NOTE_F6,NOTE_E6,NOTE_F6,NOTE_G6,0,NOTE_C6,NOTE_C6,0,
 NOTE_E6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_F6,NOTE_E6,NOTE_C6,NOTE_A6,NOTE_G6,0,
 NOTE_G5,NOTE_G5,NOTE_F6,NOTE_E6,NOTE_D6,NOTE_E6,NOTE_C6,0,0};

 int noteDurations[] = {
   8,8,8,8,8,10,8,8,10,8,10,4,8,2,
   8,10,8,8,10,8,10,4,8,2,
   8,10,8,10,8,10,4,8,4,6,
   8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,10,8,8,10,8,10,4,8,2,
   8,10,8,8,10,8,10,4,8,2,
   8,10,8,10,8,8,8,8,4,10,8,8,4,
   8,8,8,8,8,8,8,8,2,4,
   8,8,8,8,8,8,6,1,4,

   4,4,6,2,5,
   4,4,6,2,5,
   4,4,4,8,4,8,4,4,4,2,8,2,1,
   4,4,6,2,5,
   4,4,6,2,5,
   8,8,8,8,8,8,8,4,4,
   8,8,8,4,4,8,8,8,2,4,
   4,4,4,8,4,8,4,8,8,8,1,4,

   8,8,8,8,8,10,8,8,10,8,10,4,8,2,
   8,10,8,8,10,8,10,4,8,2,
   8,10,8,10,8,10,4,8,4,6,
   8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,10,8,8,10,8,10,4,8,2,
   8,10,8,8,10,8,10,4,8,2,
   8,10,8,10,8,8,8,8,4,10,8,8,4,
   8,8,8,8,8,8,8,8,2,4,
   8,8,8,8,8,8,6,1,4,};

void setup() {
  
}

void loop() {
  for (int thisNote = 0; thisNote < 264; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);   
    delay(noteDuration * 1.30); 
    noTone(8);
  }
}
