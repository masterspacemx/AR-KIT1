byte  Digit[10][8] =                
{                                
   { 1,1,1,1,1,1,0,0 },    // 0   
   { 0,1,1,0,0,0,0,0 },    // 1
   { 1,1,0,1,1,0,1,0 },    // 2
   { 1,1,1,1,0,0,1,0 },    // 3
   { 0,1,1,0,0,1,1,0 },    // 4
   { 1,0,1,1,0,1,1,0 },    // 5
   { 1,0,1,1,1,1,1,0 },    // 6
   { 1,1,1,0,0,0,0,0 },    // 7
   { 1,1,1,1,1,1,1,0 },    // 8
   { 1,1,1,0,0,1,1,0 },     // 9
};

int contador=0;

void setup() {
  pinMode(0, OUTPUT); //A
  pinMode(1, OUTPUT); //B
  pinMode(2, OUTPUT); //C
  pinMode(3, OUTPUT); //D
  pinMode(4, OUTPUT); //E
  pinMode(5, OUTPUT); //F
  pinMode(6, OUTPUT); //G
  pinMode(7, OUTPUT); //H

  pinMode(13, INPUT); // Incrementa
  pinMode(12, INPUT); // Decrementa
}

void loop(){  
   if (digitalRead(12) == HIGH) {
        delay(20);
          if (digitalRead(12) == LOW) {
            contador--;
              if(contador<0){
                contador=9;
              }         
          }
    } 

    if (digitalRead(13) == HIGH) {
        delay(20);
          if (digitalRead(13) == LOW) {
            contador++;
              if(contador>9){
                contador=0;
              }
          }
    }              
  
      for(int pin=0; pin <8; pin++){   
        digitalWrite(pin,Digit[contador][pin]);       
      }
      delay(100);          
}
