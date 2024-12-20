// Define el pin del LED
const int verde = 13;
const int amarillo = 12;
const int rojo = 11;

void setup() {
  // Configura el pin 13 como salida
  pinMode(verde, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(rojo, OUTPUT);

  
}

void loop() {
  // Luz roja encendida por 6 segundos
  digitalWrite(rojo, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(amarillo, LOW);
  delay(6000); // 6000 milisegundos = 6 segundos

  // Luz verde encendida por 4 segundos
  digitalWrite(rojo, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(amarillo, LOW);
  delay(3000); // 3000 milisegundos = 3 segundos (luz verde fija)

  // Parpadeo del verde antes de cambiar (1 segundo parpadeando)
  for (int i = 0; i < 2; i++) {
    digitalWrite(verde, LOW);  // Apaga el verde
    delay(250);                // Espera 0.25 segundos
    digitalWrite(verde, HIGH); // Enciende el verde
    delay(250);                // Espera 0.25 segundos
  }

  // Apaga el verde
  digitalWrite(verde, LOW);

  // Luz amarilla encendida por 2 segundos
  digitalWrite(amarillo, HIGH);
  delay(2000); // 1 segundo luz amarilla fija

  // Parpadeo del amarillo antes de cambiar (1 segundo parpadeando)
  for (int i = 0; i < 2; i++) {
    digitalWrite(amarillo, LOW);  // Apaga el amarillo
    delay(250);                   // Espera 0.25 segundos
    digitalWrite(amarillo, HIGH); // Enciende el amarillo
    delay(250);                   // Espera 0.25 segundos
  }

  // Apaga el amarillo
  digitalWrite(amarillo, LOW);
}
