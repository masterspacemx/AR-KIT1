/*Hola, este es el ejemplo del Hola mundo, necesitaras un led,una resistencia y tu arduino*/

void setup() {
  pinMode(13, OUTPUT);      // El pin 13 es la salida
}

void loop(){
  digitalWrite(13, HIGH);   //  Encendemos el Led
  delay(1000);              //  Esperamos 1 segundo
  
  digitalWrite(13, LOW);    //  Apagamos el Led
  delay(1000);              //  Esperamos 1 segundo
}

/*Si necesitas mas ayuda o buscas un sensor o actuador, visita nuestra pagina https://shop.master.com.mx/ donde encontraras gran variedad de 
herramientas, para llevar acabo tu proyecto*/

/* 
   https://www.facebook.com/MasterSpaceMx/
   mail masterspace@master.com.mx
*/
