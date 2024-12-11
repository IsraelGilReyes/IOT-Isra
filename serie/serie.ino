// Se declaran las variables y se les asignan los pines de salida correspondientes en la placa de Arduino
int led1 = 13;  // LED 1 conectado al pin 13
int led2 = 12;  // LED 2 conectado al pin 12
int led3 = 11;  // LED 3 conectado al pin 11
int led4 = 10;  // LED 4 conectado al pin 10
int led5 = 9;   // LED 5 conectado al pin 9
int led6 = 8;   // LED 6 conectado al pin 8
int del = 500;  // Tiempo de espera entre cambios de estado (500 ms)

// La función setup se ejecuta una vez cuando se inicia el programa
void setup() {

  // Se indica que los pines asignados a cada variable serán de salida
  pinMode(led1, OUTPUT);  // Configura el pin 13 como salida
  pinMode(led2, OUTPUT);  // Configura el pin 12 como salida
  pinMode(led3, OUTPUT);  // Configura el pin 11 como salida
  pinMode(led4, OUTPUT);  // Configura el pin 10 como salida
  pinMode(led5, OUTPUT);  // Configura el pin 9 como salida
  pinMode(led6, OUTPUT);  // Configura el pin 8 como salida

}

// La función loop se ejecuta continuamente en un ciclo repetitivo
void loop() {

  // El ciclo for se repetirá 4 veces (i=0 a i<4)
  for(int i = 0; i < 4; i++) {

     // Enciende el LED 1, espera 500 milisegundos y apaga el LED 1
     digitalWrite(led1, HIGH);   // Enciende el LED 1
     delay(del);                 // Espera 500 ms
     digitalWrite(led1, LOW);    // Apaga el LED 1

     // Enciende el LED 2, espera 500 milisegundos y apaga el LED 2
     digitalWrite(led2, HIGH);   // Enciende el LED 2
     delay(del);                 // Espera 500 ms
     digitalWrite(led2, LOW);    // Apaga el LED 2

     // Enciende el LED 3, espera 500 milisegundos y apaga el LED 3
     digitalWrite(led3, HIGH);   // Enciende el LED 3
     delay(del);                 // Espera 500 ms
     digitalWrite(led3, LOW);    // Apaga el LED 3

     // Enciende el LED 4, espera 500 milisegundos y apaga el LED 4
     digitalWrite(led4, HIGH);   // Enciende el LED 4
     delay(del);                 // Espera 500 ms
     digitalWrite(led4, LOW);    // Apaga el LED 4

     // Enciende el LED 5, espera 500 milisegundos y apaga el LED 5
     digitalWrite(led5, HIGH);   // Enciende el LED 5
     delay(del);                 // Espera 500 ms
     digitalWrite(led5, LOW);    // Apaga el LED 5

     // Enciende el LED 6, espera 500 milisegundos y apaga el LED 6
     digitalWrite(led6, HIGH);   // Enciende el LED 6
     delay(del);                 // Espera 500 ms
     digitalWrite(led6, LOW);    // Apaga el LED 6

     // Vuelve a encender el LED 5, espera 500 milisegundos y apaga el LED 5
     digitalWrite(led5, HIGH);   // Enciende el LED 5
     delay(del);                 // Espera 500 ms
     digitalWrite(led5, LOW);    // Apaga el LED 5

     // Vuelve a encender el LED 4, espera 500 milisegundos y apaga el LED 4
     digitalWrite(led4, HIGH);   // Enciende el LED 4
     delay(del);                 // Espera 500 ms
     digitalWrite(led4, LOW);    // Apaga el LED 4

     // Vuelve a encender el LED 3, espera 500 milisegundos y apaga el LED 3
     digitalWrite(led3, HIGH);   // Enciende el LED 3
     delay(del);                 // Espera 500 ms
     digitalWrite(led3, LOW);    // Apaga el LED 3

     // Vuelve a encender el LED 2, espera 500 milisegundos y apaga el LED 2
     digitalWrite(led2, HIGH);   // Enciende el LED 2
     delay(del);                 // Espera 500 ms
     digitalWrite(led2, LOW);    // Apaga el LED 2

     // Vuelve a encender el LED 1, espera 500 milisegundos y apaga el LED 1
     digitalWrite(led1, HIGH);   // Enciende el LED 1
     delay(del);                 // Espera 500 ms
     digitalWrite(led1, LOW);    // Apaga el LED 1
  }

}

