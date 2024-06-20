#include <M5Stack.h>

// Définir les pins TX et RX (optionnel, car le M5Stack utilise les pins par défaut)
const int txPin = 17; // TX pin (peut être modifié si nécessaire)
const int rxPin = 16; // RX pin (peut être modifié si nécessaire)
const long baudRate = 9600; // Vitesse de communication UART

void setup() {
  // Initialisation de M5Stack
  M5.begin();
  
  // Initialisation de la liaison série (UART)
  Serial2.begin(baudRate, SERIAL_8N1, rxPin, txPin);
}

void loop() {
  // Envoyer 0xAA en continu
  Serial2.write(0xAA);
  
  // Délai de 100 millisecondes
  delay(1);
}
