//se declaran las variables y se les asignan los pines de salida correspondientes en la placa de arduino

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int del = 500;

void setup() {

  //se indica que los pines asignados a cada variable seran de salida
  // put your setup code here, to run once:
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);
  pinMode (led4, OUTPUT);
  pinMode (led5, OUTPUT);
  pinMode (led6, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly
  //Cada uno de los leds encendera , permanecera encedido 500 milisegundos y se apagara.los leds siguientes repetiran esta accion
  //y llegando al ultimo la secuencia empezara de manera inversa. El ciclo for hara que se repita 3 veces
  for(int i=0; i<4; i++ ){

     digitalWrite(led1, HIGH);
     delay(del);
     digitalWrite(led1, LOW);

     digitalWrite(led2, HIGH);
     delay(del);
     digitalWrite(led2, LOW);

     digitalWrite(led3, HIGH);
     delay(del);
     digitalWrite(led3, LOW);

     digitalWrite(led4, HIGH);
     delay(del);
     digitalWrite(led4, LOW);

     digitalWrite(led5, HIGH);
     delay(del);
     digitalWrite(led5, LOW);

     digitalWrite(led6, HIGH);
     delay(del);
     digitalWrite(led6, LOW);

     digitalWrite(led5, HIGH);
     delay(del);
     digitalWrite(led5, LOW);

     digitalWrite(led4, HIGH);
     delay(del);
     digitalWrite(led4, LOW);

     digitalWrite(led3, HIGH);
     delay(del);
     digitalWrite(led3, LOW);

     digitalWrite(led2, HIGH);
     delay(del);
     digitalWrite(led2, LOW);

     digitalWrite(led1, HIGH);
     delay(del);
     digitalWrite(led1, LOW);
  }

}
