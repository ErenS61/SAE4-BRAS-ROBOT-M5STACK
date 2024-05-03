/* ----------------------------------------------- */
/*           DÉCLARATION DES VARIABLES DES         */
/*       BOUTONS, MOTEUR ET DES AUTORISATIONS      */
/* ----------------------------------------------- */

const int pinEnableB = 4 ;
const int pinFinCourse = 51; // Broche du capteur de fin de course

/* ----------------------------------------------- */
/*              DÉCLARATION DES BOUTONS            */
/* ----------------------------------------------- */

const int pinButton_M3_HAUT = 41 ;      // Bouton pour le mouvement HAUT du coude sur le PIN 41 de l'Arduino
const int pinButton_M3_BAS = 42 ;       // Bouton pour le mouvement BAS du coude sur le PIN 42 de l'Arduino

////////////////////////////////////////////////////////////////////////////

const int pinInput5 = 26;
const int pinInput6 = 27;

////////////////////////////////////////////////////////////////////////////

/* ----------------------------------------------- */
/*                 VARIABLES D'ÉTATS               */
/* ----------------------------------------------- */

// Variables pour stocker l'état des boutons et du capteur de fin de course
int buttonState5_M3_HAUT = 0 ;          // Variable d'état pour la position HAUT du coude
int buttonState6_M3_BAS = 0 ;           // Variable détat pour la position BAS du coude
int etatFinCourse = 0;                  // Variable pour stocker l'état du capteur de fin de course

void setup() {

/* ----------------------------------------------- */
/*            CONFIGURATION DES BROCHES            */
/*       EN SORTIE POUR LE CONTRÔLE DU MOTEUR      */
/* ----------------------------------------------- */
  
  pinMode(pinEnableB, OUTPUT) ;
  pinMode(pinInput5, OUTPUT) ;          // PIN INPUT 5 en sortie
  pinMode(pinInput6, OUTPUT) ;          // PIN INPUT 6 en sortie

/* ----------------------------------------------- */
/*            CONFIGURATION DES BROCHES            */
/*            POUR LES BOUTONS ET LE CAPTEUR       */
/*               EN ENTRÉE AVEC RÉSISTANCE PULL-UP */
/* ----------------------------------------------- */
  
  pinMode(pinButton_M3_HAUT, INPUT_PULLUP);
  pinMode(pinButton_M3_BAS, INPUT_PULLUP);
  pinMode(pinFinCourse, INPUT_PULLUP); // Configuration du capteur de fin de course comme entrée avec résistance pull-up

  // Arrêter le moteur au démarrage
  digitalWrite(pinInput5, LOW);
  digitalWrite(pinInput6, LOW);
}

void loop() {
  // Lecture de l'état des boutons et du capteur de fin de course
  buttonState5_M3_HAUT = digitalRead(pinButton_M3_HAUT);
  buttonState6_M3_BAS = digitalRead(pinButton_M3_BAS);
  etatFinCourse = digitalRead(pinFinCourse);

  // Si le bouton de montée est enfoncé et que le capteur n'est pas activé, activer le moteur vers le haut
  if (buttonState5_M3_HAUT == LOW) {
    analogWrite(pinEnableB, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput5, LOW);  // Sens antihoraire
    digitalWrite(pinInput6, HIGH);
  }

  // Si le bouton de descente est enfoncé, activer le moteur vers le bas
  else if (buttonState6_M3_BAS == LOW && etatFinCourse == HIGH) {
    analogWrite(pinEnableB, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput5, HIGH);  // Sens antihoraire
    digitalWrite(pinInput6, LOW);
  }


   else {
    // Si aucun des boutons n'est enfoncé, arrêter le moteur

    analogWrite(pinEnableB, 0);

    digitalWrite(pinInput5, LOW);
    digitalWrite(pinInput6, LOW);

  }
}


