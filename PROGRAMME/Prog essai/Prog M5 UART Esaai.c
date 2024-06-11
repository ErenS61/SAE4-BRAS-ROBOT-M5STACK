#include <M5Stack.h>

// Définir les pins TX et RX (optionnel, car le M5Stack utilise les pins par défaut)
const int txPin = 26; // TX pin (peut être modifié si nécessaire)
const int rxPin = 36; // RX pin (peut être modifié si nécessaire)
const long baudRate = 9600; // Vitesse de communication UART

void setup() {
  // Initialisation de M5Stack
  M5.begin();
  
  // Initialisation de la liaison série (UART)
  Serial.begin(baudRate, SERIAL_8N1, rxPin, txPin);
  M5.Lcd.print("Prêt à envoyer des données\n");
}

void loop() {
  // Mettre à jour l'état des boutons
  M5.update();

  // Vérifier si le bouton A est maintenu enfoncé
  if (M5.BtnA.isPressed()) {
    // Envoyer 0xAA en continu
    Serial.write(0x05);
    
    // Afficher sur l'écran du M5Stack
    M5.Lcd.print("Envoi de la trame 0x05\n");
  }

  // Délai de 100 millisecondes pour éviter d'envoyer trop de commandes en même temps
  delay(10);
}
