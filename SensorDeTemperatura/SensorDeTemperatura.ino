#include <Adafruit_Sensor.h>    // Biblioteca principal de Adafruit para sensores
#include <DHT.h>                 // Biblioteca específica para el sensor DHT
#include <DHT_U.h>               // Biblioteca adicional para funciones específicas de los sensores DHT

// Definición de pines y variables
int led = 3;                    // El pin donde está conectado el LED
int SENSOR = 4;                 // El pin donde está conectado el sensor DHT
int temperatura;                // Variable para almacenar la temperatura leída
int humedad;                    // Variable para almacenar la humedad leída

DHT dht(SENSOR, DHT11);         // Se crea un objeto 'dht' del tipo DHT, especificando el pin y el modelo de sensor (DHT11)

void setup() {
  // Este bloque de código se ejecuta una sola vez al inicio del programa
  Serial.begin(9600);           // Inicializa la comunicación serial a 9600 baudios
  dht.begin();                  // Inicializa el sensor DHT
  pinMode(led, OUTPUT);         // Configura el pin del LED como salida
}

void loop() {
  // Este bloque de código se ejecuta de manera repetitiva

  temperatura = dht.readTemperature();  // Lee la temperatura del sensor DHT y la guarda en la variable 'temperatura'
  humedad = dht.readHumidity();        // Lee la humedad del sensor DHT y la guarda en la variable 'humedad'

  // Imprime en el monitor serial la temperatura y la humedad
  Serial.print("Temperatura: ");
  Serial.print(temperatura);           // Muestra la temperatura
  Serial.print(" Humedad: ");
  Serial.println(humedad);             // Muestra la humedad y salta a una nueva línea

  delay(500);                         // Espera medio segundo (500 milisegundos) antes de volver a leer los valores

  if (temperatura >= 28) {            // Si la temperatura es mayor o igual a 28 grados
    digitalWrite(led, HIGH);          // Enciende el LED (pone el pin en HIGH)
  } else {
    digitalWrite(led, LOW);           // Si la temperatura es menor a 28, apaga el LED (pone el pin en LOW)
  }
}

