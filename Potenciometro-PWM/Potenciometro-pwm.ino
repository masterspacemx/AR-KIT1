int POTENCIOMETRO = 0;          // Lectura de potenciometro
int PWM = 0;                    // PWM para led

void setup() {
  pinMode(A0, INPUT);           // Entrada Analogica (Potenciometro)
  pinMode(9, OUTPUT);          // Salida Led
  Serial.begin(9600);           // Monitor serial
}

void loop() {
  POTENCIOMETRO = analogRead(A0);         // Realiza la lectura del potenciometro en A0 

  PWM= (POTENCIOMETRO*255)/1024;          // Realiza una conversion para obtener el valor de PWM
                                          // 1024 = 255
                                          // POT  = ¿PWM?
  
  analogWrite(9,PWM);                    // Enciende led
  
  Serial.print("Potenciometro = ");       //Muestra por monitor serial el valor leido y el de salida
  Serial.print(POTENCIOMETRO);
  Serial.print("\t PWM = ");
  Serial.println(PWM);
  delay(2);                               // Retardo antes de la siguiente lectura
}
