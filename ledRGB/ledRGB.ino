int rojo = 11;
int verde = 10;
int azul = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(rojo,OUTPUT);
   pinMode(verde,OUTPUT);
  pinMode(azul,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  /*analogWrite (rojo, 255);
  analogWrite (azul, 255);
  analogWrite (verde, 255)
  delay (2000);*/

  analogWrite (rojo, 255);
  analogWrite (azul, 2);
  analogWrite (verde, 20);
  delay (2000);

  /*digitalWrite (rojo, 105);
   digitalWrite (azul, 0);
    digitalWrite (verde, 0);
    delay (2000);*/

    /*digitalWrite (rojo,200);
    digitalWrite (azul,1);
    digitalWrite (verde, 100);
    delay (2000);*/
    
  

}
