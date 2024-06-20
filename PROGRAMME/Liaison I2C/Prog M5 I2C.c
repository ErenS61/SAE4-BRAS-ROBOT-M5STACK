#include <M5Stack.h>
#include <Wire.h>

const int COMMAND_UP = 0x55;   // Code de commande pour monter le bras
const int COMMAND_DOWN = 0x44; // Code de commande pour descendre le bras
const int COMMAND_STOP = 0x33; // Code de commande pour arrêter le mouvement

#define I2C_ADDRESS 0x08 // Adresse I2C de l'Arduino

void setup() {
  // Initialisation du M5Stack
  M5.begin();
  Wire.begin(); // Initialisation en tant que maître I2C

  // Initialisation de l'écran
  M5.Lcd.print("Ready to control the robot arm\n");
  M5.Lcd.print("BtnA: Move Up\n");
  M5.Lcd.print("BtnB: Move Down\n");
  M5.Lcd.print("BtnC: Stop Movement\n");
}

void loop() {
  // Met à jour l'état des boutons
  M5.update();

  // Si le bouton A est pressé, envoyer la commande pour monter le bras
  if (M5.BtnA.wasPressed()) {
    Wire.beginTransmission(I2C_ADDRESS);
    Wire.write(COMMAND_UP); // Envoyer le code de commande pour monter le bras
    Wire.endTransmission();
    M5.Lcd.print("Sent command: Move Up\n");
  }

  // Si le bouton B est pressé, envoyer la commande pour descendre le bras
  if (M5.BtnB.wasPressed()) {
    Wire.beginTransmission(I2C_ADDRESS);
    Wire.write(COMMAND_DOWN); // Envoyer le code de commande pour descendre le bras
    Wire.endTransmission();
    M5.Lcd.print("Sent command: Move Down\n");
  }

  // Si le bouton C est pressé, envoyer la commande pour arrêter le mouvement
  if (M5.BtnC.wasPressed()) {
    Wire.beginTransmission(I2C_ADDRESS);
    Wire.write(COMMAND_STOP); // Envoyer le code de commande pour arrêter le mouvement
    Wire.endTransmission();
    M5.Lcd.print("Sent command: Stop Movement\n");
  }
}
