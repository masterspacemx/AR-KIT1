
// Práctica encender y apagar un LED a través de botón o micro switch
 
const int Led=11;
const int Boton=7;

  int val; 
  void setup(){
  
  pinMode(Led,OUTPUT);
  pinMode(Boton,INPUT); 
}
void loop(){
  val=digitalRead(Boton); 
    if  (val==HIGH){
  digitalWrite(Led,HIGH);
  
} 
  else { digitalWrite(Led,LOW); 
}
}
