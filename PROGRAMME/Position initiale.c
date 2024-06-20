/* ----------------------------------------------- */
/*           DÉCLARATION DES VARIABLES DES         */
/*       BOUTONS, MOTEUR ET DES AUTORISATIONS      */
/* ----------------------------------------------- */

const int pinEnable = 2 ;
const int pinEnableA = 3 ;
const int pinEnableB = 4 ;
const int pinEnableC = 5 ;
const int pinEnableD = 6 ;
const int pinFinCourseM1 = 53;
const int pinFinCourseM3 = 51; // Broche du capteur de fin de cours
const int pinFinCourseM4 = 50;
const int pinFinCourseM2 = 52;
const int pinFinCourseM5 = 49;

/* ----------------------------------------------- */
/*              DÉCLARATION DES BOUTONS            */
/* ----------------------------------------------- */

const int pinButton_ini = 48 ;       // Bouton pour La mise a la position initial du bras

// PENSER A REMMETTRE LE PIN DU M5 SUR 46

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

// Variables pour stocker l'état des boutons et du capteur de fin de course

int buttonState11_ini = 0 ;	//Etat du bouton "REPOS"

int etatFinCourseM1 = 0;
int etatFinCourseM3 = 0;
int etatFinCourseM4 = 0;
int etatFinCourseM2 = 0;
int etatFinCourseM5 = 0;

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
  pinMode(pinInput7, OUTPUT) ;          // PIN INPUT 5 en sortie
  pinMode(pinInput8, OUTPUT) ;          // PIN INPUT 6 en sortie
  pinMode(pinInput9, OUTPUT) ;          // PIN INPUT 9 en sortie
  pinMode(pinInput10, OUTPUT) ;         // PIN INPUT 10 en sortie

/* ----------------------------------------------- */
/*            CONFIGURATION DES BROCHES            */
/*            POUR LES BOUTONS ET LE CAPTEUR       */
/*            EN ENTRÉE AVEC RÉSISTANCE PULL-UP    */
/* ----------------------------------------------- */

  pinMode(pinButton_ini, INPUT_PULLUP);// config du bouton Repos
  pinMode(pinFinCourseM1, INPUT_PULLUP);
  pinMode(pinFinCourseM2, INPUT_PULLUP);
  pinMode(pinFinCourseM3, INPUT_PULLUP); // Configuration du capteur de fin de course comme entrée avec résistance pull-up
  pinMode(pinFinCourseM4, INPUT_PULLUP);
  pinMode(pinFinCourseM5, INPUT_PULLUP);

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

  // Lecture de l'état des boutons et du capteur de fin de course
  buttonState11_ini = digitalRead(pinButton_ini); // Lit l'etat du bouton "REPOS"
  etatFinCourseM1 = digitalRead(pinFinCourseM1);
  etatFinCourseM2 = digitalRead(pinFinCourseM2);
  etatFinCourseM3 = digitalRead(pinFinCourseM3);
  etatFinCourseM4 = digitalRead(pinFinCourseM4);
  etatFinCourseM5 = digitalRead(pinFinCourseM5);

  // Partie Concernant le mode INITIALISATION
	
	if (buttonState11_ini == LOW) {

    		analogWrite(pinEnableD, 60);  // Pleine vitesse (255 correspond à 100%)
    		digitalWrite(pinInput9, HIGH);  // Bouge la base du bras jusqu'au capteur de fin de course definit
		digitalWrite(pinInput10, LOW);

		else if (etatFinCourseM5 == LOW){

			analogWrite(pinEnableC, 60);  // Pleine vitesse (255 correspond à 100%)
    			digitalWrite(pinInput7, HIGH);  // Bouge l'epaule du bras jusqu'au capteur de fin de course definit
    			digitalWrite(pinInput8, LOW);
		}

		else if (etatFinCourseM4 == LOW){

   		    	analogWrite(pinEnableB, 60);  // Pleine vitesse (255 correspond à 100%)
    			digitalWrite(pinInput5, HIGH);  // Bouge le coude du bras jusqu'au capteur de fin de course definit
    			digitalWrite(pinInput6, LOW);
		}

		else if (etatFinCourseM3 == LOW){

   			analogWrite(pinEnableA, 60);  // Pleine vitesse (255 correspond à 100%)
    			digitalWrite(pinInput3, LOW);  // Bouge le poignet du bras jusqu'au capteur de fin de course definit
    			digitalWrite(pinInput4, HIGH);
		}

		else if (etatFinCourseM2 == LOW){

   			analogWrite(pinEnable, 60);  // Pleine vitesse (255 correspond à 100%)
    			digitalWrite(pinInput1, LOW);  // Ouvre la pince du bras jusqu'au capteur de fin de course definit
    			digitalWrite(pinInput2, HIGH);
		}
		//Etat par défaut de tout les moteur : eteint
		else if (etatFinCourseM1 == LOW){

 			analogWrite(pinEnable, 0);
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

   else {

    // Si aucun des boutons n'est enfoncé, arrêter le moteur
    analogWrite(pinEnable, 0);
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
