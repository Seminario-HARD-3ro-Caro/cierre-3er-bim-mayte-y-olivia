//Defines de conexiones
#define verde 2
#define rojo 3
#define amarillo 4
#define blanco 5
#define boton 8

void setup() {
  // put your setup code here, to run once:
  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);
  pinMode(amarillo,OUTPUT);
  pinMode(blanco,OUTPUT);
  pinMode(boton,INPUT); //Esta conectado como PULLDOWN 


}

int x = 0; //variable x es igual a 0
bool flag = false; //flag es falso (para comprobar que el boton estaba prevviamente apgado)

void loop() {
  // put your main code here, to run repeatedly:
  
  //si el boton esta presionado todas las leds se encienden y si no esta apretado todas estan apagadas
  if(digitalRead(boton) == HIGH && flag ==false) { //cuando flag sea falso

    flag = true; //cambia a que flag pase a ser verdadero
    x++; //cuando apretas el boton se le suma 1 a x
    
    if(x== 1){ //si es igual a 1:
     digitalWrite(verde,LOW);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,LOW);
     delay(500);
    }

    if(x== 2){ //sie es igual a 2:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 3){ //si es igual a 3:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 4){ //si es igual a 4:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,HIGH);
      delay(500);
    }


    if(x== 5){ //si es igual a 4:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 6){ //si es igual a 4:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 7){ //si es igual a 4:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 8){ //si es igual a 4:
      digitalWrite(verde,LOW);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 9){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 10){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 11){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 12){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,LOW);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 13){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 14){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,LOW);
     digitalWrite(blanco,HIGH);
      delay(500);
    }

    if(x== 15){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,LOW);
      delay(500);
    }

    if(x== 16){ //si es igual a 4:
      digitalWrite(verde,HIGH);
     digitalWrite(rojo,HIGH);
     digitalWrite(amarillo,HIGH);
     digitalWrite(blanco,HIGH);
      delay(500);

      x= x-16;
    }

  } 
  
  if(digitalRead(boton)==LOW) {
    flag = false;  //reinicia que flag es falso
  }
    

}
