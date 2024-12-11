#include <Wire.h> // Biblioteca para la comunicación I2C, necesaria para controlar el LCD
#include <LiquidCrystal_I2C.h> // Biblioteca para manejar un LCD con interfaz I2C

// Se crea un objeto `lcd` de la clase LiquidCrystal_I2C. 
// El primer parámetro (0x3F) es la dirección del dispositivo I2C del LCD.
// El segundo parámetro (16) es el número de columnas del LCD.
// El tercer parámetro (2) es el número de filas del LCD.
LiquidCrystal_I2C lcd(0x3F, 16, 2); 

void setup() {
  // Código que se ejecuta una sola vez al iniciar el programa

  lcd.init(); // Inicializa el LCD para prepararlo para su uso
  lcd.backlight(); // Enciende la luz de fondo del LCD

  // Muestra el texto "Hola Mundo" en la primera fila (por defecto)
  lcd.print("Hola Mundo"); 
}

void loop() {
  // Código que se ejecuta repetidamente después de setup()

  // Establece el cursor en la primera columna y segunda fila (fila 1, columna 0)
  lcd.setCursor(0, 1); 
  
  // Muestra el tiempo transcurrido en segundos desde que se encendió el dispositivo
  // `millis()` devuelve el tiempo en milisegundos, por lo que se divide por 1000 para mostrar los segundos
  lcd.print(millis() / 1000); 
  
  // Muestra el texto "segundos" después del número de segundos
  lcd.print(" segundos");
  
  // La siguiente línea está comentada, pero permite desplazar el texto a la izquierda en el LCD
  // lcd.scrollDisplayLeft();

  delay(100); // Espera 100 milisegundos antes de actualizar la pantalla (evita parpadeo)
}

