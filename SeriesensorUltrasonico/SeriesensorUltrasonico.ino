#include <Wire.h>

#include <LiquidCrystal_I2C.h>

int trig = 10;
int eco = 11;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;


int duracion;
int distancia;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // put your setup code here, to run once:
pinMode(trig, OUTPUT);
pinMode(eco, INPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);

Serial.begin(9600);
lcd.init();
lcd.clear();
lcd.backlight();

//lcd.print("el objeto esta");



};

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig, HIGH);
delay(1);
digitalWrite(trig, LOW);
duracion = pulseIn(eco, HIGH);
distancia = duracion / 58.2;

//Serial.print("El obj. está a: ");
Serial.print(distancia);
//Serial.println(" cm");
//delay(1000);

//lcd.scrollDisplayLeft();
lcd.clear();
lcd.print("Distancia");
lcd.setCursor(0,1);
lcd.print(String(distancia)+ "cm");
delay(100);


if(distancia <=5){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }
//CASO 2
  if(distancia >5 && distancia <=15){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }

  //CASO 3
  if(distancia >15 && distancia <=25){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }

  //CASO 4
if(distancia >25 && distancia <=35){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }

  //CASO 5

  if(distancia >35 && distancia <=45){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }

//CASO 6
if(distancia >45 && distancia <=50){
   digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  delay(1000);
}
else {
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  //delay(2000);
  }


//valor = analogRead(eco);



}
