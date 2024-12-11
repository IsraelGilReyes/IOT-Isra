#include <LiquidCrystal.h>  // Incluir la librería para controlar pantallas LCD

// Definición de pines para el sensor ultrasonido y el LED
int trig = 10; // Pin de disparo del sensor ultrasonido
int eco = 9;   // Pin de recepción del eco del sensor ultrasonido
int led = 13;   // Pin del LED
int duracion;  // Variable para almacenar la duración del pulso de eco
int distancia;  // Variable para almacenar la distancia calculada en centímetros

// Configuración de pines para la pantalla LCD
const int rs = 7, en = 8, d4 = 5, d5 = 4, d6 = 3, d7 = 2; // Pines de control para LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); // Crear objeto para controlar la pantalla LCD

void setup() {
  // Configurar los pines del sensor y del LED como salida o entrada
  pinMode(trig, OUTPUT); // El pin de disparo del sensor se configura como salida
  pinMode(eco, INPUT);   // El pin de recepción del eco se configura como entrada
  pinMode(led, OUTPUT);  // El pin del LED se configura como salida

  // Inicializar la comunicación serial con la PC
  Serial.begin(9600); // Configurar la comunicación serial a 9600 baudios
  
  // Inicializar la pantalla LCD
  lcd.begin(16, 2); // Configurar el LCD con 16 columnas y 2 filas
  
  // Imprimir "Hola Mundo" en la pantalla LCD
  lcd.setCursor(0, 0); // Colocar el cursor en la primera línea
  lcd.print("Hola Mundo"); // Escribir "Hola Mundo" en la LCD
  
  // Esperar 2 segundos antes de empezar a medir
  delay(2000); // Esperar 2000 milisegundos (2 segundos)
  lcd.clear(); // Limpiar la pantalla LCD
}

void loop() {
  // Enviar una señal ultrasonica para medir la distancia
  digitalWrite(trig, HIGH); // Enviar señal de alta tensión en el pin trig
  delay(1);  // Esperar 1 milisegundo
  digitalWrite(trig, LOW); // Apagar la señal en el pin trig
  
  // Medir el tiempo que tarda el eco en regresar
  duracion = pulseIn(eco, HIGH); // Medir el tiempo del pulso alto en el pin eco
  distancia = duracion / 58.2; // Calcular la distancia en centímetros usando la fórmula: distancia = tiempo / 58.2
  
  // Imprimir la distancia medida en la consola serial
  Serial.print(distancia); // Imprimir el valor de la distancia
  Serial.print(" centimetros"); // Imprimir "centímetros"
  Serial.println(); // Imprimir salto de línea
  
  delay(200); // Esperar 200 milisegundos antes de realizar otra medición

  // Encender o apagar el LED dependiendo de la distancia medida
  if (duracion <= distancia) {  // Si el eco es más rápido que la distancia
    digitalWrite(led, LOW);  // Apagar el LED
    delay(100);  // Esperar 100 milisegundos
  } else {
    digitalWrite(led, HIGH);  // Encender el LED
    delay(100);  // Esperar 100 milisegundos
  }

  // Controlar el LED según la distancia
  if (distancia <= 20) {  // Si la distancia es menor o igual a 20 cm
    digitalWrite(led, HIGH);  // Encender el LED
    delay(100);  // Esperar 100 milisegundos
  } else {
    digitalWrite(led, LOW);  // Apagar el LED
    delay(100);  // Esperar 100 milisegundos
  }
}

