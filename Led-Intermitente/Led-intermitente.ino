void setup(){
  pinMode(13, OUTPUT);      // Configura Pin 13 como salida.
}

void loop(){
  digitalWrite(13, HIGH);   // Enciende Led en el pin 13.
  delay(1000);              // Retardo de un segundo.
  digitalWrite(13, LOW);    // Apaga Led en el pin 13.
  delay(1000);              // Retardo de un segundo.
}
