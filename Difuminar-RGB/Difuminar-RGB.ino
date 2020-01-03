int B=9;
int R=10;
int G=11;

int ctrl=0;
int brillo=0;

  void setup(){
    for (int i =9 ; i<=9 ; i++)
    pinMode(i, OUTPUT);
  }

  void loop(){    
    if(ctrl==0){
      rojo();
     }
    else if(ctrl==1){
      mixRG();
      }
    else if(ctrl==2){
      verde();
      }            
    else if(ctrl==3){
      mixGB();
      }
    else if(ctrl==4){
      azul();
      }
    else if(ctrl==5){
      mixBR();
      }
    else if(ctrl==6){
      mixRGB();
      }
    else{
      apaga();
      }
      
  }

  void rojo(){
    analogWrite(R,brillo);
    brillo++;      
    delay(10);    
      if(brillo==255){
        brillo=0;
        ctrl=1;
        }
    }

  void mixRG(){
    analogWrite(G,brillo);
    brillo++;      
    delay(10);    
      if(brillo==255){        
        ctrl=2;
        }
    }

  void verde(){
    analogWrite(R,brillo);
    brillo--;      
    delay(10);    
      if(brillo==0){        
        ctrl=3;
        }
    }

  void mixGB(){
    analogWrite(B,brillo);
    brillo++;      
    delay(10);    
      if(brillo==255){        
        ctrl=4;
        }
    }

  void azul(){
    analogWrite(G,brillo);
    brillo--;      
    delay(10);    
      if(brillo==0){        
        ctrl=5;
        }
    }

  void mixBR(){
    analogWrite(R,brillo);
    brillo++;      
    delay(10);    
      if(brillo==255){        
        ctrl=6;
        brillo=0;
        }
    }

  void mixRGB(){
    analogWrite(G,brillo);
    brillo++;      
    delay(10);    
      if(brillo==255){        
        ctrl=7;
        }
    }
  void apaga(){
    analogWrite(R,brillo);
    analogWrite(G,brillo);
    analogWrite(B,brillo);
    brillo--;      
    delay(10);    
      if(brillo==0){        
        ctrl=0;
        }
    }
