void setup(){
  pinMode(13, OUTPUT);      // Configura Pin 13 como salida.
  pinMode(12, OUTPUT);      // Configura Pin 13 como salida.
  pinMode(11, OUTPUT);      // Configura Pin 13 como salida.
  pinMode(10, OUTPUT);      // Configura Pin 13 como salida.
  pinMode(9, OUTPUT);       // Configura Pin 13 como salida.
  pinMode(8, OUTPUT);       // Configura Pin 13 como salida.
}

void loop(){
  digitalWrite(13, HIGH);   // Enciende Led en el pin 13.
  delay(200);               // Retardo de un segundo.
  digitalWrite(13, LOW);    // Apaga Led en el pin 13.
  delay(200);               // Retardo de un segundo.
  
  digitalWrite(12, HIGH);   // Enciende Led en el pin 12.
  delay(200);               // Retardo de un segundo.
  digitalWrite(12, LOW);    // Apaga Led en el pin 12.
  delay(200);
  
  digitalWrite(11, HIGH);   // Enciende Led en el pin 11.
  delay(200);               // Retardo de un segundo.
  digitalWrite(11, LOW);    // Apaga Led en el pin 11.
  delay(200);               // Retardo de un segundo.
  
  digitalWrite(10, HIGH);   // Enciende Led en el pin 10.
  delay(200);               // Retardo de un segundo.
  digitalWrite(10, LOW);    // Apaga Led en el pin 10.
  delay(200);               // Retardo de un segundo.
  
  digitalWrite(9, HIGH);   // Enciende Led en el pin 9.
  delay(200);              // Retardo de un segundo.
  digitalWrite(9, LOW);    // Apaga Led en el pin 9.
  delay(200);              // Retardo de un segundo.
  
  digitalWrite(8, HIGH);   // Enciende Led en el pin 8.
  delay(200);              // Retardo de un segundo.
  digitalWrite(8, LOW);    // Apaga Led en el pin 8.
  delay(200);              // Retardo de un segundo.
}
