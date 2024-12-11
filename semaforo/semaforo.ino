// Definición de los pines a los que están conectados los LEDs
int rojo = 13;      // Pin 13 para el LED rojo
int amarillo = 10;  // Pin 10 para el LED amarillo
int verde = 8;      // Pin 8 para el LED verde

void setup() {
  // Esta función se ejecuta una sola vez al inicio.
  
  pinMode(rojo, OUTPUT);    // Configura el pin del LED rojo como salida
  pinMode(amarillo, OUTPUT); // Configura el pin del LED amarillo como salida
  pinMode(verde, OUTPUT);    // Configura el pin del LED verde como salida
}

void loop() {
  // Esta función se ejecuta repetidamente.
  
  // Encender el LED verde
  digitalWrite(verde, HIGH);  // Enciende el LED verde
  delay(4000);                // Espera 4 segundos (4000 milisegundos)
  digitalWrite(verde, LOW);   // Apaga el LED verde
  
  // Encender el LED amarillo
  digitalWrite(amarillo, HIGH); // Enciende el LED amarillo
  delay(2000);                  // Espera 2 segundos (2000 milisegundos)
  digitalWrite(amarillo, LOW);  // Apaga el LED amarillo
  
  // Parpadeo rápido del LED amarillo tres veces
  for(int i = 0; i < 3; i++) {
    digitalWrite(amarillo, HIGH);  // Enciende el LED amarillo
    delay(300);                    // Espera 300 milisegundos
    digitalWrite(amarillo, LOW);   // Apaga el LED amarillo
    delay(300);                    // Espera 300 milisegundos
  }
  
  // Encender el LED rojo
  digitalWrite(rojo, HIGH);    // Enciende el LED rojo
  delay(6000);                 // Espera 6 segundos (6000 milisegundos)
  digitalWrite(rojo, LOW);     // Apaga el LED rojo
}

