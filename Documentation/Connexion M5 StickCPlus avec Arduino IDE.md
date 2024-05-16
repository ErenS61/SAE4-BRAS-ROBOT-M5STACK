<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Logo_enseignement_sup.png" alt="" width="152">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Logo_Universit%C3%A9_de_Haute-Alsace_-_UHA.png" alt="" width="330">

# Connexion du M5 StickC Plus avec le logiciel Arduino IDE

Éléments requis :

- Le logiciel Arduino IDE (version 2.3.2) installé sur votre ordinateur
- Un M5 StickC Plus
- Un câble USB-A vers  USB-C



Pour télécharger le logiciel Arduino IDE, vous pouvez vous rendre sur le site officiel en [cliquant ici](https://www.arduino.cc/en/software).



Arduino IDE peut être télécharger sur les systèmes d'exploitation suivants :

- **Windows 10** en 64 bits (et plus récent)

- **macOS Catalina** version 10.15 en 64 bits (ou plus récent) et **macOS Big Sure** version 11 en 64 bits (ou plus récent)

- **Linux AppImage** en 64 bits (x86-64)



# Manipulation à réaliser



### Étape 1 : Ajouter l'URL de gestionnaire de cartes supplémentaire

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID0.gif" alt="" data-align="center">

À l'ouveture du logiciel Arduino IDE, naviguer dans les rubriques suivantes :

 `Fichier` > `Préférences` 

Une fois avoir accès à la page Préférences, dans la zone "URL de gestionnaire des cartes supplémentaires", cliquer sur le bouton <img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/CAP2.png" alt="" data-align="inline" width="50"> et coller l'URL `https://dl.espressif.com/dl/package_esp32_index.json` puis cliquer sur le bouton <img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/CAP3.png" title="" alt="" width="59">.

***

### Étape 2 : Le gestionnaire de carte

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID1.gif" alt="" data-align="center">

Dans la barre d'outils verticale, en haut à gauche de la page, cliquer sur le bouton de gestionnaire de carte <img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/CAP4.png" title="" alt="" width="50"> et taper dans la zone de recherche `ESP32`, puis installer le gestionnaire de carte `esp32 par Espressif Systems` dans la version **2.0.11**.

L'installation du gestionnaire de carte peut prendre du temps.

***

### Étape 3 : Le gestionnaire de bibliothèque

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID2.gif" alt="" data-align="center">

Dans la barre d'outils verticale, en haut à gauche de la page, cliquer sur le bouton de gestionnaire de bibliothèque <img title="" src="file:///C:/Users/erens/Downloads/CAP5.png" alt="" width="50">  et taper dans la zone de recherche `M5StickCPlus`, puis installer la bibliothèque `M5StickCPlus par M5Stack` dans la version **0.1.0**.

Une page va s'afficher, appuyer sur le bouton `Install All`.

L'installation de la bibliothèque peut prendre du temps.

***

### Étape 4 : Branchement du M5Stick-C Plus à l'ordinateur

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/PHOTO1.JPEG" alt="" width="458" data-align="center">

Prenez votre câble et brancher la partie USB-A à un port USB de votre ordinateur et la partie USB-C sur votre M5Stick-C Plus. Le M5Stick-C Plus devrait s'allumer et afficher la page `API KEY`.

***

### Étape 5 : L'emplacement du port COM sur l'ordinateur

<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID4.gif" title="" alt="" data-align="center">

Sur votre ordinateur Windows, dans la barre de recherche, taper `Gestionnaire des périphériques`. Tout en bas, dérouler la section `Ports (COM et LPT)`. Un nouveau port COM est utiliser par le M5Stick-C Plus, il s'appelle par défaut `USB Serial Port` et se trouve sur le `COM 5`.

Si aucun port COM n'est détecter, débrancher le câble et rebrancher le puis raffraichissez la page. Vérifier également que le M5Stick-C Plus est bien brancher et allumé.

***

### Étape 6 : Choix de la carte à utiliser

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID3.gif" alt="" data-align="center">

Dans la rubrique Outils, sélectionner `Carte` > `esp32`.

Dans la liste déroulante, sélectionner `M5Stick-C`. Une fois avoir choisi la carte, la mention `M5Stick-C` apparaît en-dessous de la rubrique Outils ainsi que le port COM qui lui est assigné. S'il n'y a rien, choisissez la carte et le port COM manuellement en cliquant sur le bouton `Sélectionner une autre carte et un port...`.



&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/CAP1.png" title="" alt="" data-align="center">

***

### Étape 7 : L'envoie d'un programme d'exemple

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID5.gif" alt="" data-align="center">

Une fois que le choix de la carte et du port COM réaliser, cliquer sur la rubrique `Fichier` puis sur `Exemples`. Défiler la liste jusqu'a trouver la mention `M5StickCPlus`.

Dans cette fiche explicative, nous allons utiliser l'exemple du programme qui affiche le texte `Hello World`. Pour cela, appuyer sur `Basics` puis sur `HelloWorld`.

Une nouvelle fenêtre Arduino IDE s'affiche.

***

### Étape 8 : Envoie du programme sur le M5Stick-C Plus

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/VID6.gif" alt="" data-align="center">

Pour envoyer le programme sur le M5Stick-C Plus, cliquer sur le bouton téléverser <img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/CAP6.png" alt="" width="50">.

L'envoie du programme sur le M5Stick-C Plus peut prendre du temps.

***

### Étape 9 : Affichage du programme sur le M5Stick-C Plus

<img title="" src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/HELLO%20WORLD.gif" alt="" data-align="center">

Dès que le programme est téléverser sur le M5Stick-C Plus, la page `API KEY` disparaît et affiche le texte `Hello World`.



## Et voilà ! Vous avez réussi à connecter le M5Stick-C Plus au logiciel Arduino IDE. 🎉



# Crédit

Cette notice à été réaliser par **Eren SAHIN**, étudiant en 2<sup>ème</sup> GEii à l'IUT de Mulhouse.



> Date de création : **05/05/2024**
