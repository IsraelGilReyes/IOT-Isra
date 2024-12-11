#include <Wire.h>  // Librería para comunicación I2C
#include <LiquidCrystal_I2C.h>  // Librería para controlar la pantalla LCD I2C

// Definición de pines
int trig = 10;  // Pin del sensor ultrasónico para el TRIG (emisión de pulso)
int eco = 9;    // Pin del sensor ultrasónico para el ECO (recepción del pulso)
int led = 3;    // Pin para el LED (se enciende cuando la distancia es corta)
int duracion;   // Variable para almacenar la duración del pulso (tiempo de ida y vuelta)
int distancia;  // Variable para almacenar la distancia calculada

// Inicialización de la pantalla LCD en la dirección I2C 0x27, 16 columnas y 2 filas
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Configuración inicial del hardware
  pinMode(trig, OUTPUT);  // El pin TRIG es de salida (para enviar el pulso)
  pinMode(eco, INPUT);    // El pin ECO es de entrada (para recibir el pulso)
  pinMode(led, OUTPUT);   // El pin LED es de salida (para encender el LED)

  Serial.begin(9600);     // Inicializa la comunicación serial a 9600 baudios

  lcd.init();             // Inicializa la pantalla LCD
  lcd.clear();            // Limpia la pantalla LCD
  lcd.backlight();       // Enciende la retroiluminación de la pantalla
}

void loop() {
  // Enviar un pulso de 10 microsegundos a TRIG para iniciar la medición de distancia
  digitalWrite(trig, HIGH);  // Envía el pulso HIGH a TRIG
  delay(1);                  // Espera 1 ms (duración mínima del pulso)
  digitalWrite(trig, LOW);   // Termina el pulso

  // Medir el tiempo que tarda el eco en regresar
  duracion = pulseIn(eco, HIGH);  // Lee el tiempo en microsegundos que tarda el pulso en regresar

  // Calcula la distancia en centímetros utilizando la fórmula (duración / 58.2)
  distancia = duracion / 58.2;    // La constante 58.2 convierte el tiempo en distancia en cm

  // Mostrar la distancia en la consola serial
  //Serial.print("El obj. está a: "); 
  Serial.print(distancia);        // Imprime la distancia medida en la consola serial
  //Serial.println(" cm");        // Agrega "cm" al final de la distancia (comentado)
  //delay(1000);                   // Retraso de 1 segundo (comentado)

  // Limpiar la pantalla LCD y mostrar la distancia medida
  lcd.clear();  // Limpia la pantalla LCD
  lcd.print("Distancia");  // Muestra el texto "Distancia" en la primera línea
  lcd.setCursor(0, 1);    // Mueve el cursor a la segunda línea (fila 1)
  lcd.print(String(distancia) + "cm");  // Muestra la distancia en centímetros

  delay(100);  // Espera 100 ms antes de la próxima medición

  // Encender el LED si la distancia es menor o igual a 20 cm
  if (distancia <= 20) {  // Si la distancia medida es menor o igual a 20 cm
    digitalWrite(led, HIGH);  // Enciende el LED
    delay(1000);              // Mantiene el LED encendido durante 1 segundo
  } else {
    digitalWrite(led, LOW);   // Apaga el LED si la distancia es mayor a 20 cm
    delay(100);               // Retraso corto de 100 ms antes de la siguiente lectura
  }

  // Nota: La línea "valor = analogRead(eco);" está comentada y no se usa
  // Valor sería utilizado si se quisiera leer el valor analógico del pin ECO.
}

