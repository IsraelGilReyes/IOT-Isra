int rojo = 13;
int amarillo = 10;
int verde = 8;


void setup() {
  // put your setup code here, to run once:
  pinMode (rojo, OUTPUT);
  pinMode (amarillo, OUTPUT);
  pinMode (verde, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:

   //led verde 
  digitalWrite(verde, HIGH);
  delay(4000);
  digitalWrite(verde, LOW);
  

  //led amarillo
  digitalWrite(amarillo, HIGH);
  delay(2000);
  digitalWrite(amarillo, LOW);
  
  for(int i=0; i<3; i++){
  digitalWrite(amarillo, HIGH);
  delay(300);
  digitalWrite(amarillo, LOW);
  delay(300);
  digitalWrite(amarillo, LOW);
  }
  //led rojo
  digitalWrite(rojo, HIGH);
  delay(6000);
  digitalWrite(rojo, LOW);
  
}
