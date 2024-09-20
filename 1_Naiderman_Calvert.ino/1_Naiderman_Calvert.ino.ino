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

void loop() {
  // put your main code here, to run repeatedly:
  
  //si el boton esta presionado todas las leds se encienden y si no esta apretado todas estan apagadas
  if(digitalRead(boton) == HIGH) { 
    digitalWrite(verde,HIGH);
    digitalWrite(rojo,HIGH);
    digitalWrite(amarillo,HIGH);
    digitalWrite(blanco,HIGH);

  } else {
    digitalWrite(verde,LOW);
    digitalWrite(rojo,LOW);
    digitalWrite(amarillo,LOW);
    digitalWrite(blanco,LOW);

  }

}
