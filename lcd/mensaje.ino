#include <Wire.h>  // Incluye la librería Wire para la comunicación I2C.
#include <LiquidCrystal_I2C.h>  // Incluye la librería para controlar pantallas LCD con interfaz I2C.

LiquidCrystal_I2C lcd(0x3F, 16, 2);  // Crea un objeto "lcd" para la pantalla LCD I2C, con dirección 0x3F, de 16 columnas y 2 filas.

void setup() {
  // put your setup code here, to run once:
  
  lcd.init();  // Inicializa la pantalla LCD (configura la comunicación I2C y prepara la pantalla).
  
  lcd.backlight();  // Enciende la retroiluminación de la pantalla LCD.
  
  lcd.print("Hola Mundo");  // Muestra el mensaje "Hola Mundo" en la primera fila de la pantalla LCD.
}

void loop() {
  // put your main code here, to run repeatedly:

  lcd.setCursor(0, 1);  // Coloca el cursor en la primera columna (columna 0) de la segunda fila (fila 1) de la pantalla LCD.
  
  lcd.print(millis() / 1000);  // Muestra el número de segundos transcurridos desde que se encendió el Arduino (millis() devuelve el tiempo en milisegundos).
  
  lcd.print(" segundos");  // Añade el texto " segundos" al lado del número de segundos en la pantalla LCD.
  
  //lcd.scrollDisplayLeft();  // Esta línea está comentada, pero si se descomenta, hace que el texto se desplace hacia la izquierda de la pantalla.

  delay(100);  // Pausa la ejecución durante 100 milisegundos antes de repetir el ciclo (esto reduce la frecuencia de actualización de la pantalla).
}

