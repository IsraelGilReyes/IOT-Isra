#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>

int led= 3;
int SENSOR = 4;
int temperatura;
int humedad;

DHT dht(SENSOR, DHT11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  dht.begin();
  pinMode(led, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

temperatura = dht.readTemperature();
humedad =dht.readHumidity();
//delay(1);

Serial.print("Temperatura: ");
Serial.print(temperatura);
Serial.print(" Humedad: ");

Serial.println(humedad);
delay(500);

if (temperatura >= 28){
  digitalWrite (led, HIGH);
}
}
