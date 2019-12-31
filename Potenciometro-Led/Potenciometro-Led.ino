int POTENCIOMETRO=0;

void setup(){
  pinMode(A0, INPUT);                   // Entrada Analogica (Potenciometro)
  pinMode(13, OUTPUT);                  // Salida Led
}

void loop(){
  POTENCIOMETRO=analogRead(A0);         // Lee el valor del potenciometro
                                        // Retardo minimo (1 ms)
                                        // Retardo maximo (1024 ms)
                                        

  digitalWrite(13, HIGH);               // Enciende el led
  delay(POTENCIOMETRO);                 // Retardo determinado por potenciometro (ms)
  digitalWrite(13, LOW);                // Apaga el led
  delay(POTENCIOMETRO);                 // Retardo determinado por el potenciometro.
}
