<img src="Images/Logo_enseignement_sup.png" width="152">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="Images/Logo_Université_de_Haute-Alsace_-_UHA.png" width="330">

# SAE Bras robotisé avec M5 StickC Plus

### Ceci est un projet du département GEII de l'Institut Universitaire de Technologie de Mulhouse.

##### Membres de la SAE : SAHIN Eren / PRIZZI-SCHERER Benjamin / SCHMITT Thomas

##### Professeurs tuteur de la SAE : M. HUEBER Eric / M. MOURLLION Benjamin

## Contexte

Le but de ce projet est de piloter un bras robotisé grâce à une application smartphone qui servira aussi de retour d'informations.

### Matériel à notre disposition

- Bras robotisé
- Arduino Mega 2560
- M5 StickC Plus
- M5 stack Fire

### Tableau prévisionnel

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Tableau%20pr%C3%A9visionnel%203.png)

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Tableau%20pr%C3%A9visionnel%201.png)

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Tableau%20pr%C3%A9visionnel%202.png)

***

### Étapes du projet :

- Création d'un mode manuel utilisant des boutons pour chacun des 5 moteurs

- Apprendre a utiliser le m5 stick c+ (qui fut abandonner pour le M5 Stack Fire)

- Chercher a utiliser la connexion uart du stick C+ puis du stack fire avec l'arduino (en cours)

- Utiliser MIT AppInventor pour créer une application simple devant controler le bras robot (en cours)

- Trouver comment connecter en Bluetooth l'application et le M5 Stack Fire (en cours)

### Utilisation mode manuel :

(image des boutons)

- M1 controle le moteur de la pince l'ouvrant et la fermant

- M2 controle le moteur du poignet lui permettant de monter ou de descendre (haut=monter / bas=descendre)

- M3 controle le moteur du coude lui permetant de monter et descendre (haut=monter / bas=descendre)

- M4 controle le moteur de l'épaule il peut bouger en avant et en arriere (AV=Monter / AR=Arriere)

- M5 controle le moteur de la base du bras tourant en sens horaire et antihoraire (CW=sens horaire / CCW= sens anti-horaire)

***

Il y a aussi un bouton permettant d'allumer et eteindre la lampe en bout de la pince

Un bouton "Home" servant a remmetre le bras dans une potion initiale (en cours)

Un bouton on/off est aussi présent

Si 2 boutons agisant sur un même moteur sont presser seul l'un d'entre sera pris en compte

Chaque moteur possède un capteur de fin de course empêchant au bras de continuer et de s'endommager. Il sont situer pour bloquer :

- M1: l'ouverture de la pince

- M2: la montée du poignet (haut)

- M3: la descente du coude (bas)

- M4: le mouvement arrière de l'épaule (AR)

- M5: le mouvement horaire de la base (CW)





(partie concernant le 5 stack(I2C,uart etc)

comment ca marche

ce qu'on a essayer

pourquoi ca a pas marcher

des piste de solution a chaque probleme

ce qu'on a choisit comme résolution

partie concernant appinventor

rapidement comment ca marche

ce qu'on a fait

partie concernant le bluetooth

comment ca marche

ce qui marche pas

ce qu'on a fait
