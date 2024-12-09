int ldr =  A5;
int valor;
int led =13;
int limite = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // frecuencia
  pinMode(ldr,INPUT); // para poder recibir valores 
  

}

void loop() {
  // put your main code here, to run repeatedly:
  int valor = analogRead(ldr); //obtener los valores de respuesta y guardarlos en la variable valor  
  Serial.println(valor); // imprimir los datos que se guardaron en la variable de  valor
  delay(1000);

  if(valor <=limite){
    digitalWrite(led, HIGH);
    delay(1000);
   
  }else{
    digitalWrite(led, LOW);
    
  }
  

}
