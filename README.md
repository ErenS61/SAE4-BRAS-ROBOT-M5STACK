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

(titre) étapes du projet:

- création d'un mode manuel utilisant des boutons pour chaqu'un des 5 moteurs

- apprendre a utiliser le m5 stick c+ (qui fut abandonner pour le 5 stack fire)

- chercher a utiliser la connexion uart du stick C+ puis du stack fire avec l'arduino (en cour)

- utiliser MIT AppInventor pour créer une application simple devant controler le bras robot (en cour)

- trouver comment connecter en bluetooth l'application et le 5 stack fire (en cour)



(titre) utilisation mode manu:

(image des boutons)

M1 controle le moteur de la pince l'ouvrant et la fermant

M2 controle le moteur du poignet lui permettant de monter ou de descendre (haut=monter / bas=descendre)

M3 controle le moteur du coude lui permetant de monter et descendre (haut=monter / bas=descendre)

M4 controle le moteur de l'épaule il peut bouger en avant et en arriere (AV=Monter / AR=Arriere)

M5 controle le moteur de la base du bras tourant en sens horaire et antihoraire (CW=sens horaire / CCW= sens anti-horaire)

il y a aussi un bouton permettant d'allumer et eteindre la lampe en bout de la pince
