int ldr=  A5;
int valor;
int led =13;
int limite=100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // frecuencia
  pinMode(ldr,INPUT); // para poder recibir valoes 
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int valor = analogRead(ldr); //obtenr los valores de respuesta y guardarlos en la variavle valor  
  Serial.println(valor); // imprimir los datos que se guardoaron el la variavle de  valor
  delay(1000);

  if(valor <=limite){
    digitalWrite(led, HIGH);
    delay(1000);
   
  }else{
    digitalWrite(led, LOW);
    
  }
  

}
