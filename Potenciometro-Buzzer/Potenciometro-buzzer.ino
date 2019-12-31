int POTENCIOMETRO = 0;          // Lectura de potenciometro

void setup() {
  pinMode(A0, INPUT);           // Entrada Analogica (Potenciometro)
  pinMode(8, OUTPUT);           // Salida buzzer  
}

void loop() {
  POTENCIOMETRO = analogRead(A0);             // Realiza la lectura del potenciometro en A0 
  tone(8, POTENCIOMETRO, POTENCIOMETRO*125);  // Genera tono   
  delay(2);                                   // Retardo antes de la siguiente lectura
}
