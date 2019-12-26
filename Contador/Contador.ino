int contador=0;

void setup() {
  pinMode(13, INPUT);               // Incrementa
  pinMode(12, INPUT);               // Decrementa

  Serial.begin(9600);
}

void loop() {
    if (digitalRead(12) == HIGH) {
        delay(20);
          if (digitalRead(12) == LOW) {
            contador--;
          }
    } 

    if (digitalRead(13) == HIGH) {
        delay(20);
          if (digitalRead(13) == LOW) {
            contador++;
          }
    }              

      Serial.print("Contador:\t");
      Serial.println(contador);
}
