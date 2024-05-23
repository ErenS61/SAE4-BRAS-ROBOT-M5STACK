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
