#include <M5Stack.h>

const int txPin = 17; // TX pin (peut être modifié si nécessaire)
const int rxPin = 16; // RX pin (peut être modifié si nécessaire)
const long baudRate = 9600; // Vitesse de communication UART

void setup() {
  // Initialisation du M5Stack
  M5.begin();
  Serial.begin(baudRate, SERIAL_8N1, rxPin, txPin);

  // Initialisation de l'écran
  M5.Lcd.print("Ready to control the robot arm\n");
  M5.Lcd.print("BtnA: Move Up\n");
  M5.Lcd.print("BtnB: Move Down\n");
  M5.Lcd.print("BtnC: Stop Movement\n");
}

void loop() {
  // Met à jour l'état des boutons
  M5.update();

  // Si le bouton A est pressé, envoyer la commande pour monter le bras en continu
  if (M5.BtnA.isPressed()) {
    Serial.write(0x55); // Envoyer le code de commande pour monter le bras
    M5.Lcd.print("Sent command: Move Up\n");
    delay(100); // Petit délai pour éviter d'envoyer trop de commandes en même temps
  }

  // Si le bouton B est pressé, envoyer la commande pour descendre le bras en continu
  if (M5.BtnB.isPressed()) {
    Serial.write(0x44); // Envoyer le code de commande pour descendre le bras
    M5.Lcd.print("Sent command: Move Down\n");
    delay(100); // Petit délai pour éviter d'envoyer trop de commandes en même temps
  }

  // Si le bouton C est pressé, envoyer la commande pour arrêter le mouvement en continu
  if (M5.BtnC.isPressed()) {
    Serial.write(0x33); // Envoyer le code de commande pour arrêter le mouvement
    M5.Lcd.print("Sent command: Stop Movement\n");
    delay(100); // Petit délai pour éviter d'envoyer trop de commandes en même temps
  }
}
