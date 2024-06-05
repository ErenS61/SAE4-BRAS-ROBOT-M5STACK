
const int pinEnableA = 3;
const int pinFinCourseM2 = 52;

const int pinButton_M2_HAUT = 39;  // Bouton pour le mouvement HAUT du poignet sur le PIN 39 de l'Arduino
const int pinButton_M2_BAS = 40;   // Bouton pour le mouvement BAS du poignet sur le PIN 40 de l'Arduino

const int pinInput3 = 24;
const int pinInput4 = 25;

int buttonState3_M2_HAUT = 0;  // Variable d'état pour la position HAUT du poignet
int buttonState4_M2_BAS = 0;   // Variable d'état pour la position BAS du poignet

int etatFinCourseM2 = 0;

void setup() {
  pinMode(pinEnableA, OUTPUT);
  pinMode(pinInput3, OUTPUT); // PIN INPUT 3 en sortie
  pinMode(pinInput4, OUTPUT); // PIN INPUT 4 en sortie

  pinMode(pinButton_M2_HAUT, INPUT_PULLUP);
  pinMode(pinButton_M2_BAS, INPUT_PULLUP);
  pinMode(pinFinCourseM2, INPUT_PULLUP);

  // Arrêter le moteur au démarrage
  digitalWrite(pinInput3, LOW);
  digitalWrite(pinInput4, LOW);
  
  // Initialiser la communication série
  Serial.begin(9600); // Définir le baud rate de communication
}

void loop() {
  // Lire l'état des boutons
  buttonState3_M2_HAUT = digitalRead(pinButton_M2_HAUT);
  buttonState4_M2_BAS = digitalRead(pinButton_M2_BAS);
  etatFinCourseM2 = digitalRead(pinFinCourseM2);

  // Contrôler le mouvement basé sur les boutons
  if (buttonState3_M2_HAUT == LOW && etatFinCourseM2 == HIGH) {
    analogWrite(pinEnableA, 60);
    digitalWrite(pinInput3, LOW);
    digitalWrite(pinInput4, HIGH);
  } else if (buttonState4_M2_BAS == LOW) {
    analogWrite(pinEnableA, 60);
    digitalWrite(pinInput3, HIGH);
    digitalWrite(pinInput4, LOW);
  } else {
    analogWrite(pinEnableA, 0);
    digitalWrite(pinInput3, LOW);
    digitalWrite(pinInput4, LOW);
  }

  // Vérifier s'il y a des données disponibles sur le port série
  if (Serial.available() > 0) {
    // Lire les données reçues
    byte receivedByte = Serial.read();

    // Exécuter les commandes basées sur les données reçues
    if (receivedByte == 0x55) {
      // Commande pour monter le bras
      analogWrite(pinEnableA, 60);
      digitalWrite(pinInput3, LOW);
      digitalWrite(pinInput4, HIGH);

      // Attendre jusqu'à ce que la fin de course soit atteinte
      while (digitalRead(pinFinCourseM2) == HIGH) {
        // Continue le mouvement
        delay(10); // Petit délai pour éviter de bloquer l'UART
      }

      // Arrêter le moteur à la fin de course
      analogWrite(pinEnableA, 0);
      digitalWrite(pinInput3, LOW);
      digitalWrite(pinInput4, LOW);
    } else if (receivedByte == 0x44) {
      // Commande pour descendre le bras
      analogWrite(pinEnableA, 60);
      digitalWrite(pinInput3, HIGH);
      digitalWrite(pinInput4, LOW);
    } else if (receivedByte == 0x33) {
      // Commande pour arrêter le mouvement
      analogWrite(pinEnableA, 0);
      digitalWrite(pinInput3, LOW);
      digitalWrite(pinInput4, LOW);
    }
  }
}
