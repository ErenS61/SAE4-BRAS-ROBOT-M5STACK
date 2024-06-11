<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Logo_enseignement_sup.png" width="152">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Logo_Universit%C3%A9_de_Haute-Alsace_-_UHA.png" width="330">

# Avancement de notre SAE

### 08/04/2024

`Ce qu'on a fait :`

- Découverte de la SAE
- Listing des matériaux
- Définition de l'objectif
- Listing des contraintes
- Commandes des matériaux nécessaires :
  - Capteur
  - M5 Stack V 2.7
  - Potentiomètre
  - Caméra UnitV K210

***

### 11/04/2024

`Ce qu'on a fait :`

- Comprenhension des cablages du bras robot
- Regarder comment fonctionne le M5 Stick
- Comprehension de la mise en marche et programmation de petit code sur le M5 Stick
- Prise en main du logiciel UIFlow

***

### 16/04/2024

`Ce qu'on a fait :`

- Commencer la programmation sur le logiciel Arduino IDE

***

### 02/05/2024 (Libre)

`Ce qu'on a fait :`

- Comprendre le fonctionnement des capteurs de fin de course
- Incorporation des capteurs de fin de course dans le programme

`Les problèmes rencontrés :`

- L'incorporation des capteurs de fin de course dans le programme n'a pas donné le résultat attendu. <br>Quand le capteur de fin de course était à l'état actif, le mouvement du coude vers l'avant ne s'arrêter pas.

***

### 03/05/2024 (Autonomie hors de la SAE Libres)

`Ce qu'on a fait :`

- Essayer d'incorporer les lignes de codes des capteurs de fin de course dans le programme principale.

`Les problèmes rencontrés :`

- L'incorporation des capteurs de fin de course dans le programme principale ne fonctionnait pas, <br>c'est-à-dire que tout les boutons permettant de contrôler les moteurs fonctionnait hormis le bouton <br>M3_BAS qui permet d'incliner le coude du bras robotisé vers le bas dans laquel se trouvait les modifications <br>incluant le capteur de fin de course.
- Le programme seul du capteur de fin de course du M3_BAS fonctionne quand aucun autre bouton n'est ajouté dedans, <br>mais il ne fonctionne pas quans les autre boutons sont dans le programme.

***

### 06/05/2024 (Autonomie hors de la SAE Libres)

`Ce qu'on a fait :`

- Checker tout les capteurs de fin de courses un par un avec un multimètre

- Vérification de la cohabitation de deux capteurs de fin de course dans un seul et même programme

`Les problèmes rencontrés :`

- Le capteur de fin de course de la pince M1 ne fonctionne plus (tension à 2V en fonctionnement)

- Le bouton poussoir `CCW` du M5 ne fonctionne plus (une commande RS à été envoyé au technicien)

***

### 07/05/2024 (Autonomie hors de la SAE Libres)

`Ce qu'on a fait :`

- Ajout des capteurs de fin de course M2 et M5 dans le programme principale

- Modification du bouton M5 CCW vers le bouton HOME

`Les problèmes rencontrés :`

- Câble du capteur de fin de course M2 débrancher par une personne ne faisant pas partie du projet (personne tierces)

- Recontitution du câble à son emplacement d'origine après maintenance (dénudement du câble)

***

### 14/05/2024 (SAE Libres)

`Ce qu'on a fait :`

- Remplacement du capteur de fin de course de la pince M1 par un nouveau

- Ajout des lignes de codes dans le programme principale permettant d'utiliser le capteur de fin de course M1

- Avancement sur la présentation oral de mi-parcours

***

### 23/05/2024 (SAE)

`Ce qu'on a fait :`

- Découverte du nouveau M5 Dial

- Implatation du nouveau UI Flow 2

- Prise en main de UI Flow 2

`Les problèmes rencontrés :`

- Problème de connectique avec le M5 Dial

- Supposition avec l'alimentation en courant du M5 Dial (6V - 36V) contre 5V pour le Arduino

- COM7 marche et pas COM9 (forcer sur le gestionnaire de périphérique)

***

### 29/05/2024 (SAE)

`Ce qu'on a fait :`

- Création des programmes de l'Arduino et du M5Stack Fire en incluant la communication UART afin de piloter le bras robotisé depuis le M5

`Les problèmes rencontrés :`

- Les deux modules ne semble pas communiquer entre eux même si leurs programmes semble correct (possible problème de traduction des valeurs envoyé dans la liasion série)

- Difficulté à comprendre la logique du M5Stack Fire

***

### 30/05/2024 (SAE Libres)

`Ce qu'on a fait :`

- Fixer le problèmes d'émission d'une trame de donnée depuis le M5Stack Fire

`Les problèmes rencontrés :`

- L'Arduino ne reçoit pas les trames de données émis depuis le M5Stack Fire (à vérifier avec un oscilloscope)

***

### 31/05/2024 (SAE Libres)

`Ce qu'on a fait :`

- Commande des boutons poussoirs reçu

- Changement des boutons poussoirs défaillant

- Vérification de la réception d'une trame de donnée depuis l'Arduino

`Les problèmes rencontrés :`

- Problèmes de contact récurant sur le bouton poussoir M3 HAUT

- 

***

### 05/06/2024 (SAE)

`Ce qu'on a fait :`

- Préparation du programme pour le mode initial

- Changement de protocole de communication de l'UART vers L'I2C

`Les problèmes rencontrés :`

- Toujours pas d'exécution de programme avec le protocol UART malgrés la réception de données de l'Arduino visualiser sur un oscilloscope

- Le protocole I2C semble présenter les mêmes problèmes que l'UART

***

### 07/06/2024 (SAE Libres)

`Ce qu'on a fait :`

- Recherche de possibilité de contré l'intertie des moteurs par logiciel

- Essaie de la même chose avec un PID

- Essaie de la communication UART en utilisant les PIN GPIO

`Les problèmes rencontrés :`

- La contre innertie des moteurs par logiciel ne semble par fonctionner

- Les PID fonctionne principalement en langage Python et non en C

***

### 11/06/2024 (SAE)

`Ce qu'on a fait :`

- Essayer de nouvelle manière de connecter le M5 à l'Arduino en UART

- Faire des recherche sur le codage Bluetooth

`Les problèmes rencontrés :`

- Arrivé toujours pas à réaliser la liaison entre les deux appareils

- Le M5 envoie des données mais l'Arduino ne semble toujours pas les recevoir

- 
