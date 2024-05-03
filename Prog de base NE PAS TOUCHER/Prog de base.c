
/* ----------------------------------------------- */
/*           DÉCLARATION DES VARIABLES DES         */
/*       BOUTONS, MOTEUR ET DES AUTORISATIONS      */
/* ----------------------------------------------- */

const int pinEnable = 2 ;               // Broche de contrôle de la vitesse du moteur (PWM)
const int pinEnableA = 3 ;
const int pinEnableB = 4 ;
const int pinEnableC = 5 ;
const int pinEnableD = 6 ;


/* ----------------------------------------------- */
/*              DÉCLARATION DES BOUTONS            */
/* ----------------------------------------------- */


const int pinButton_M1_OUVRE = 36 ;     // Bouton pour l'OUVERTURE de la pince sur le PIN 36 de l'Arduino
const int pinButton_M1_FERME = 38 ;     // Bouton pour la FERMETURE de la pince sur le PIN 38 de l'Arduino

const int pinButton_M2_HAUT = 39 ;      // Bouton pour le mouvement HAUT du poignet sur le PIN 39 de l'Arduino
const int pinButton_M2_BAS = 40 ;       // Bouton pour le mouvement BAS du poignet sur le PIN 40 de l'Arduino

const int pinButton_M3_HAUT = 41 ;      // Bouton pour le mouvement HAUT du coude sur le PIN 41 de l'Arduino
const int pinButton_M3_BAS = 42 ;       // Bouton pour le mouvement BAS du coude sur le PIN 42 de l'Arduino

const int pinButton_M4_AV = 43 ;        // Bouton pour le mouvement AVANT de l'épaule sur le PIN 43 de l'Arduino
const int pinButton_M4_AR = 44 ;        // Bouton pour le mouvement ARRIÈRE de l'épaule sur le PIN 44 de l'Arduino

const int pinButton_M5_CW = 45 ;        // Bouton pour le mouvement SENS HORAIRE de la base sur le PIN 45 de l'Arduino
const int pinButton_M5_CCW = 46 ;       // Bouton pour le mouvement SENS ANTI-HORAIRE de la base sur le PIN 46 de l'Arduino

////////////////////////////////////////////////////////////////////////////

const int pinInput1 = 22;   // Broche de commande 1 du pont en H (IN_1)
const int pinInput2 = 23;   // Broche de commande 2 du pont en H (IN_2)

const int pinInput3 = 24;
const int pinInput4 = 25;

const int pinInput5 = 26;
const int pinInput6 = 27;

const int pinInput7 = 28;
const int pinInput8 = 29;

const int pinInput9 = 30;
const int pinInput10 = 31;

////////////////////////////////////////////////////////////////////////////


/* ----------------------------------------------- */
/*                 VARIABLES D'ÉTATS               */
/* ----------------------------------------------- */


// Variables pour stocker l'état des boutons

int buttonState1_M1_OUVRE = 0 ;         // Variable d'état pour l'OUVERTURE de la pince
int buttonState2_M1_FERME = 0 ;         // Variable d'état pour la FERMETURE de la pince

int buttonState3_M2_HAUT = 0 ;          // Variable d'état pour la position HAUT du poignet
int buttonState4_M2_BAS = 0 ;           // Variable d'état pour la position BAS du poignet

int buttonState5_M3_HAUT = 0 ;          // Variable d'état pour la position HAUT du coude
int buttonState6_M3_BAS = 0 ;           // Variable détat pour la position BAS du coude

int buttonState7_M4_AV = 0 ;            // Variable d'état pour un mouvement vers l'AVANT de l'épaule
int buttonState8_M4_AR = 0 ;            // Variable d'état pour un mouvement vers l'ARRIÉRE de l'épaule

int buttonState9_M5_CW = 0 ;            // Variable d'état pour un mouvement dans le SENS HORAIRE de la base
int buttonState10_M5_CCW = 0 ;          // Variable d'état pour un mouvement dans le SENS ANTI-HORAIRE de la base



void setup() {


/* ----------------------------------------------- */
/*            CONFIGURATION DES BROCHES            */
/*       EN SORTIE POUR LE CONTRÔLE DU MOTEUR      */
/* ----------------------------------------------- */

  pinMode(pinEnable, OUTPUT) ;
  pinMode(pinEnableA, OUTPUT) ;
  pinMode(pinEnableB, OUTPUT) ;
  pinMode(pinEnableC, OUTPUT) ;
  pinMode(pinEnableD, OUTPUT) ;



  pinMode(pinInput1, OUTPUT) ;          // PIN INPUT 1 en sortie
  pinMode(pinInput2, OUTPUT) ;          // PIN INPUT 2 en sortie

  pinMode(pinInput3, OUTPUT) ;          // PIN INPUT 3 en sortie
  pinMode(pinInput4, OUTPUT) ;          // PIN INPUT 4 en sortie

  pinMode(pinInput5, OUTPUT) ;          // PIN INPUT 5 en sortie
  pinMode(pinInput6, OUTPUT) ;          // PIN INPUT 6 en sortie

  pinMode(pinInput7, OUTPUT) ;          // PIN INPUT 7 en sortie
  pinMode(pinInput8, OUTPUT) ;          // PIN INPUT 8 en sortie

  pinMode(pinInput9, OUTPUT) ;          // PIN INPUT 9 en sortie
  pinMode(pinInput10, OUTPUT) ;         // PIN INPUT 10 en sortie


/* ----------------------------------------------- */
/*            CONFIGURATION DES BROCHES            */
/*            POUR LES BOUTONS EN ENTRÉE           */
/* ----------------------------------------------- */



  pinMode(pinButton_M1_OUVRE, INPUT_PULLUP);
  pinMode(pinButton_M1_FERME, INPUT_PULLUP);

  pinMode(pinButton_M2_HAUT, INPUT_PULLUP);
  pinMode(pinButton_M2_BAS, INPUT_PULLUP);

  pinMode(pinButton_M3_HAUT, INPUT_PULLUP);
  pinMode(pinButton_M3_BAS, INPUT_PULLUP);

  pinMode(pinButton_M4_AV, INPUT_PULLUP);
  pinMode(pinButton_M4_AR, INPUT_PULLUP);

  pinMode(pinButton_M5_CW, INPUT_PULLUP);
  pinMode(pinButton_M5_CCW, INPUT_PULLUP);



  // Arrêter le moteur au démarrage
  digitalWrite(pinInput1, LOW);
  digitalWrite(pinInput2, LOW);

  digitalWrite(pinInput3, LOW);
  digitalWrite(pinInput4, LOW);

  digitalWrite(pinInput5, LOW);
  digitalWrite(pinInput6, LOW);

  digitalWrite(pinInput7, LOW);
  digitalWrite(pinInput8, LOW);

  digitalWrite(pinInput9, LOW);
  digitalWrite(pinInput10, LOW);

}

void loop() {
  // Lecture de l'état des boutons
  buttonState1_M1_OUVRE = digitalRead(pinButton_M1_OUVRE);
  buttonState2_M1_FERME = digitalRead(pinButton_M1_FERME);

  buttonState3_M2_HAUT = digitalRead(pinButton_M2_HAUT);
  buttonState4_M2_BAS = digitalRead(pinButton_M2_BAS);

  buttonState5_M3_HAUT = digitalRead(pinButton_M3_HAUT);
  buttonState6_M3_BAS = digitalRead(pinButton_M3_BAS);

  buttonState7_M4_AV = digitalRead(pinButton_M4_AV);
  buttonState8_M4_AR = digitalRead(pinButton_M4_AR);

  buttonState9_M5_CW = digitalRead(pinButton_M5_CW);
  buttonState10_M5_CCW = digitalRead(pinButton_M5_CCW);

  // Si le premier bouton est enfoncé, activer le moteur à pleine vitesse dans le sens horaire
  if (buttonState1_M1_OUVRE == LOW) {
    analogWrite(pinEnable, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput1, LOW); // Sens horaire
    digitalWrite(pinInput2, HIGH);
  }


  // Si le deuxième bouton est enfoncé, activer le moteur à pleine vitesse dans le sens antihoraire A MODIFIERRRRR !!!!!!!!! LES LOW ET HIGH
  else if (buttonState2_M1_FERME == LOW) {
    analogWrite(pinEnable, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput1, HIGH);  // Sens antihoraire
    digitalWrite(pinInput2, LOW);
  } 


  // Si le deuxième bouton est enfoncé, activer le moteur à pleine vitesse dans le sens antihoraire
  else if (buttonState3_M2_HAUT == LOW) {
    analogWrite(pinEnableA, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput3, LOW);  // Sens antihoraire
    digitalWrite(pinInput4, HIGH);
  }


  else if (buttonState4_M2_BAS == LOW) {
    analogWrite(pinEnableA, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput3, HIGH);  // Sens antihoraire
    digitalWrite(pinInput4, LOW);
  }


   // Si le deuxième bouton est enfoncé, activer le moteur à pleine vitesse dans le sens antihoraire
  else if (buttonState5_M3_HAUT == LOW) {
    analogWrite(pinEnableB, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput5, LOW);  // Sens antihoraire
    digitalWrite(pinInput6, HIGH);
  }


  else if (buttonState6_M3_BAS == LOW) {
    analogWrite(pinEnableB, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput5, HIGH);  // Sens antihoraire
    digitalWrite(pinInput6, LOW);
  }


  // Si le deuxième bouton est enfoncé, activer le moteur à pleine vitesse dans le sens antihoraire
  else if (buttonState7_M4_AV == LOW) {
    analogWrite(pinEnableC, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput7, LOW);  // Sens antihoraire
    digitalWrite(pinInput8, HIGH);
  }


  else if (buttonState8_M4_AR == LOW) {
    analogWrite(pinEnableC, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput7, HIGH);  // Sens antihoraire
    digitalWrite(pinInput8, LOW);
  }

// Si le deuxième bouton est enfoncé, activer le moteur à pleine vitesse dans le sens antihoraire
  else if (buttonState9_M5_CW == LOW) {
    analogWrite(pinEnableD, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput9, HIGH);  // Sens antihoraire
    digitalWrite(pinInput10, LOW);
  }


  else if (buttonState10_M5_CCW == LOW) {
    analogWrite(pinEnableD, 60);  // Pleine vitesse (255 correspond à 100%)
    digitalWrite(pinInput9, LOW);  // Sens antihoraire
    digitalWrite(pinInput10, HIGH);
  }




  else {
    // Si aucun des boutons n'est enfoncé, arrêter le moteur
    analogWrite(pinEnable, 0); // Arrêter le moteur
    analogWrite(pinEnableA, 0);
    analogWrite(pinEnableB, 0);
    analogWrite(pinEnableC, 0);
    analogWrite(pinEnableD, 0);

    digitalWrite(pinInput1, LOW);
    digitalWrite(pinInput2, LOW);

    digitalWrite(pinInput3, LOW);
    digitalWrite(pinInput4, LOW);

    digitalWrite(pinInput5, LOW);
    digitalWrite(pinInput6, LOW);

    digitalWrite(pinInput7, LOW);
    digitalWrite(pinInput8, LOW);

    digitalWrite(pinInput9, LOW);
    digitalWrite(pinInput10, LOW);
  }
}
