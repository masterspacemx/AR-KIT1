int BLUE=9;                     //Se declara a que pin se va a conectar cada color
int RED=10;
int GREEN=11;

void setup() {
  for (int i =9 ; i<=11 ; i++){
    pinMode(i, OUTPUT);         // Establece pin 9-11 como salida
  }
}

void loop() {   
  analogWrite(RED,255);         //Enciende Rojo
  delay(500);
  analogWrite(RED,0);           //Apaga Rojo
  delay(500);

  analogWrite(BLUE,255);        //Enciende Azul
  delay(500);                 
  analogWrite(BLUE,0);          //Apaaga Azul
  delay(500);
  
  analogWrite(GREEN,255);       //Enciende Verde
  delay(500);
  analogWrite(GREEN,0);         //Apaga Verde
  delay(500);
}
