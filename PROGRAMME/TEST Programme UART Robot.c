/* ----------------------------------------------- */
/*           DÉCLARATION DES VARIABLES DES         */
/*       BOUTONS, MOTEUR ET DES AUTORISATIONS      */
/* ----------------------------------------------- */

const int pinEnableA = 3;
const int pinFinCourseM2 = 52;

/* ----------------------------------------------- */
/*              DÉCLARATION DES BOUTONS            */
/* ----------------------------------------------- */

const int pinButton_M2_HAUT = 39;  // Bouton pour le mouvement HAUT du poignet sur le PIN 39 de l'Arduino
const int pinButton_M2_BAS = 40;   // Bouton pour le mouvement BAS du poignet sur le PIN 40 de l'Arduino

////////////////////////////////////////////////////////////////////////////

const int pinInput3 = 24;
const int pinInput4 = 25;

////////////////////////////////////////////////////////////////////////////

/* ----------------------------------------------- */
/*                 VARIABLES D'ÉTATS               */
/* ----------------------------------------------- */

// Variables pour stocker l'état des boutons et du capteur de fin de course

int buttonState3_M2_HAUT = 0;  // Variable d'état pour la position HAUT du poignet
int buttonState4_M2_BAS = 0;   // Variable d'état pour la position BAS du poignet

int etatFinCourseM2 = 0;
int etatFinCourseM5 = 0;

/* ----------------------------------------------- */
/*                 VARIABLES UART                  */
/* ----------------------------------------------- */

const int baudRate = 9600; // Vitesse de transmission UART

char receivedCommand = 0; // Variable pour stocker la commande reçue

void setup() {
  /* ----------------------------------------------- */
  /*            CONFIGURATION DES BROCHES            */
  /*       EN SORTIE POUR LE CONTRÔLE DU MOTEUR      */
  /* ----------------------------------------------- */

  pinMode(pinEnableA, OUTPUT);
  pinMode(pinInput3, OUTPUT); // PIN INPUT 3 en sortie
  pinMode(pinInput4, OUTPUT); // PIN INPUT 4 en sortie

  /* ----------------------------------------------- */
  /*            CONFIGURATION DES BROCHES            */
  /*            POUR LES BOUTONS ET LE CAPTEUR       */
  /*               EN ENTRÉE AVEC RÉSISTANCE PULL-UP */
  /* ----------------------------------------------- */

  pinMode(pinButton_M2_HAUT, INPUT_PULLUP);
  pinMode(pinButton_M2_BAS, INPUT_PULLUP);
  pinMode(pinFinCourseM2, INPUT_PULLUP);

  // Arrêter le moteur au démarrage
  digitalWrite(pinInput3, LOW);
  digitalWrite(pinInput4, LOW);

  // Initialisation de la communication série pour UART
  Serial.begin(9600); // Communication avec M5Stack Fire
}

void loop() {
  // Lecture de l'état des boutons et du capteur de fin de course
  buttonState3_M2_HAUT = digitalRead(pinButton_M2_HAUT);
  buttonState4_M2_BAS = digitalRead(pinButton_M2_BAS);
  etatFinCourseM2 = digitalRead(pinFinCourseM2);

  // Lecture des commandes reçues via UART
  if (Serial.available()) {
    receivedCommand = Serial.read();

    if (receivedCommand == 0x55) { // Commande pour monter le bras
      if (etatFinCourseM2 == HIGH) {
        analogWrite(pinEnableA, 60); // Pleine vitesse (255 correspond à 100%)
        digitalWrite(pinInput3, LOW); // Sens antihoraire
        digitalWrite(pinInput4, HIGH);
      }
    } else if (receivedCommand == 0x44) { // Commande pour descendre le bras
      analogWrite(pinEnableA, 60); // Pleine vitesse (255 correspond à 100%)
      digitalWrite(pinInput3, HIGH); // Sens horaire
      digitalWrite(pinInput4, LOW);
    } else if (receivedCommand == 0x33) { // Commande pour arrêter le mouvement
      analogWrite(pinEnableA, 0);
      digitalWrite(pinInput3, LOW);
      digitalWrite(pinInput4, LOW);
    }
  }
  
  // Commandes manuelles avec les boutons
  if (buttonState3_M2_HAUT == LOW && etatFinCourseM2 == HIGH) {
    analogWrite(pinEnableA, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput3, LOW);  // Sens antihoraire
    digitalWrite(pinInput4, HIGH);
  } else if (buttonState4_M2_BAS == LOW) {
    analogWrite(pinEnableA, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput3, HIGH);  // Sens horaire
    digitalWrite(pinInput4, LOW);
  } else {
    // Si aucun des boutons n'est enfoncé, arrêter le moteur
    analogWrite(pinEnableA, 0);
    digitalWrite(pinInput3, LOW);
    digitalWrite(pinInput4, LOW);
  }
  */
}

