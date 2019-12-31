int LED=9;          // Pin donde esta conectado el Led
int BRILLO=0;       // Brillo del Led
int CONTROL=0;      // Variable de control de programa;


void setup() {
  pinMode(LED, OUTPUT);         //Pin 9 como salida
  Serial.begin(9600);
}

void loop() {
  
  analogWrite(LED,BRILLO);         //Establece el brillo en el led 
  
  if(CONTROL==0){                 // Si control es 0, entonces:
      BRILLO++;                   // Incrementa brillo
        if(BRILLO==256){          // Si brillo llega al maximo, entonces,          
            CONTROL=1;            // Control cambia a 1
          }
  }

  else if(CONTROL==1){            // Si control es 1
      BRILLO--;                   // 
        if(BRILLO==0){
          CONTROL=0;          
        }
  }

  Serial.println("BRILLO    CONTROL");
  Serial.print(BRILLO);
  Serial.print("  ");
  Serial.println(CONTROL);
  delay(30);
}
