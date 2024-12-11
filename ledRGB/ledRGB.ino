int rojo = 11;  // Se define el pin de salida para el LED rojo en el pin 11.
int verde = 10; // Se define el pin de salida para el LED verde en el pin 10.
int azul = 9;   // Se define el pin de salida para el LED azul en el pin 9.

void setup() {
  // Esta función se ejecuta una vez al inicio del programa.

  pinMode(rojo, OUTPUT);  // Se configura el pin rojo como salida.
  pinMode(verde, OUTPUT); // Se configura el pin verde como salida.
  pinMode(azul, OUTPUT);  // Se configura el pin azul como salida.
}

void loop() {
  // Esta función se ejecuta repetidamente después de la función setup.

  /* Este bloque de código está comentado y no se ejecuta.
     En caso de estar activado, ajustaría los pines con PWM para los colores a su valor máximo (255),
     lo que haría que el LED se encienda a su máxima intensidad para todos los colores.
     Luego, espera 2 segundos (2000 milisegundos).
  analogWrite(rojo, 255);  
  analogWrite(azul, 255);
  analogWrite(verde, 255);
  delay(2000); */

  // Configura el LED para un color específico usando PWM (modulación de ancho de pulso).
  // El valor 255 representa la intensidad máxima, mientras que 2 y 20 son valores bajos de intensidad.
  analogWrite(rojo, 255); // Enciende el LED rojo al máximo brillo (255).
  analogWrite(azul, 2);   // Enciende el LED azul con un brillo bajo (2).
  analogWrite(verde, 20); // Enciende el LED verde con un brillo bajo (20).
  delay(2000);            // Pausa la ejecución durante 2 segundos (2000 milisegundos).

  /* Los bloques siguientes están comentados y no se ejecutan.
     Si estuvieran activos, usarían digitalWrite() para controlar el encendido/apagado de los LEDs.
     Los valores en digitalWrite son 0 (apagado) o 1 (encendido).
  digitalWrite(rojo, 105);   // Apaga o enciende el LED rojo según el valor (0 o 1).
  digitalWrite(azul, 0);    // Apaga el LED azul (0).
  digitalWrite(verde, 0);   // Apaga el LED verde (0).
  delay(2000);               // Pausa de 2 segundos.

  digitalWrite(rojo, 200);  // Enciende parcialmente el LED rojo (valor de intensidad 200).
  digitalWrite(azul, 1);    // Enciende el LED azul (valor de intensidad 1).
  digitalWrite(verde, 100); // Enciende parcialmente el LED verde (valor de intensidad 100).
  delay(2000);              // Pausa de 2 segundos. */

}

