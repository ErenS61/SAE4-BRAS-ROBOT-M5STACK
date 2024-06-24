<img src="Images/Logo_enseignement_sup.png" width="152">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="Images/Logo_Université_de_Haute-Alsace_-_UHA.png" width="330">

# SAE Bras robotisé avec M5 Stack Fire

### Ceci est un projet du département GEII de l'Institut Universitaire de Technologie de Mulhouse.

##### Membres de la SAE : SAHIN Eren / PRIZZI-SCHERER Benjamin / SCHMITT Thomas

##### Professeurs tuteur de la SAE : M. HUEBER Eric / M. MOURLLION Benjamin

## Contexte

Le but de ce projet est de piloter un bras robotisé grâce au contrôleur M5 Stack Fire et potentiellement avec une application smartphone qui servira aussi de retour d'informations.

### Matériel à notre disposition

- Bras robotisé
- Arduino Mega 2560
- M5 stack Fire

### Planning prévisionnel

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Mindview%203.png)

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Mindview%201.png)

![](https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Mindview%202.png)

***

### Étapes du projet :

- Création d'un mode manuel utilisant des boutons pour chacun des 5 moteurs

- Apprendre a utiliser le m5 stick c+ (qui fut abandonner pour le M5 Stack Fire)

- Chercher a utiliser la connexion UART du stick C+ puis du stack fire avec l'arduino

- Utiliser MIT AppInventor pour créer une application simple devant controler le bras robot 

- Trouver comment connecter en Bluetooth l'application et le M5 Stack Fire

### Utilisation mode manuel :

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Bouton%20robot.jpeg" width="700">

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

### Utilisation du M5 Stack Fire (UART, I2C etc)

#### (comment ça marche, à développer si possible)

Pour manipuler l'arduino sans utiliser les boutons nous avons dû apprendre à utiliser et programmer sur M5 stack, nous avont utiliser pour cette saé un M5 stcik c+ au début avant de passer a un M5 stack fire.

#### (ce qu'on a essayé)

Dans un premier temps nous avons commencé à programmer sur un M5 sticks C + pour nous familiariser avec l'interface, nous avons décidé d'utiliser une communication UART entre le M5 stacks et l'arduino, que ce soit sur le stick c sur le stack fire, car nous pensions que cette forme de communication était la plus pratique et facile à programmer, l'idée devait être simple, on envoie un signal par le port/fils de transmission vers le port récepteur de l'arduino et on renvoyait un signal depuis un port de transmission de l'arduino vers le port/fils de transmission vers le port récepteur de l'arduino et on renvoyait un signal depuis un port de transmission de l'arduino vers le port de réception du M5 stacks (développer au besoin)

#### (pourquoi ça n'a pas marché)

Cependant sur le M5 stacks fire nous avons rencontré un problème de communication entre l'arduino et le M5 stacks que nous avons pensés venu d'une particularité de conception venant du stack causant une grande perplexité pour nous, selon plusieurs forums parlant de M5 stack et de problème de communication, parle des ports 16 et 17 de ce dernier censé servir à l'UART mais qui est utilisé en interne du stack pour l'utilisation de RAM supplémentaire, nous avons donc pensé que nos problèmes de communication entre arduino et M5 stacks venaient de défaut de ces ports, mais après vérification grace à un oscilloscope nous avons constaté que le M5 stacks envoyait bien un signal vers l'arduino, l'explication la plus probable serait selon nous un problème  au niveau de l'arduino, soit de programmation, l'arduino ne comprend pas ce qu'elle reçoit et donc n'applique pas les ligné de code prévue, mais il est aussi possible que le port de réception ne fonctionne pas tout simplement, nous avons donc essayé de changer de port pour le signal pour avoir le même résultat, les lignes de code ne s'exécutent pas, nous en avons conclu que le problème doit venir de la programmation, mais nous n'avons pas encore trouvé comment régler ce problème à ce jour.

***

### Application smartphone

Une prototype visuelle d'application a été réaliser lors de la SAE grâce au logiciel en ligne MIT App Inventor.

L'application devra répondre aux éxigences suivants :

- Afficher une page d'accueil

- Pouvoir se connecter en Bluetooth au M5 Stack Fire grâce à un bouton `Connexion`

- Afficher les différents moteurs (M1 à M5)

- Lors d'un appuie sur l'un des boutons d'un moteur, il devra afficher des flèches directionnel

- Afficher un bouton `Retour` afin de revenir sur la page d'accueil

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<img src="https://github.com/ErenS61/SAE4-BRAS-ROBOT-M5STACK/blob/main/Images/Prototype%20application%20SAE.jpg" width="700">

***

### Le Bluetooth

Le projet comporte une partie fonctionnant avec le réseau Bluetooth d'un smartphone apparairé au M5 Stack Fire faisant office de commande à distance avec l'application smartphone. Le développement du projet ayant pris du retard, la partie réseau Bluetooth n'a pas pu être abordé.

Néanmoins, nous joignons ci-joint un lien vidéo vers un tutoriel sur l'utilisation du réseau Bluetooth sur le M5 Stack Fire :

https://youtu.be/E495XIsM1PI?si=JN3kD0oYo0OMLb5L

***

### Passage du M5 Stick C Plus au M5 Stack Dial puis au M5 Stack Fire

Lors du commencement du projet, nous avions à notre disposition un M5 Stick C Plus. Un affichage de différents données était envisager sur le M5 Stick C Plus ainsi que le pilotage depuis cette appareil. Le M5 Stick C Plus étant trop petit, et les boutons étant difficile à utiliser, nous avons dû changer pour un autre mdèle de la même marque.

Nous somme ensuite passer au M5 Stack Dial. Le Dial, avec ça forme cylindrique, était le dernier modèle sortie de la marque M5. Elle embarquait avec elle un lecteur de carte RFID, un petit écran tactile de 1,28", diverses interfaces périphériques telles que SPI, I2C, UART, ADC, etc. Sur le papier, il avait tout pour être utiliser mais le problème était au niveau de la prise en main. En effet, le M5 Stack Dial étant trop récent, il n'y avait pas de programme pré-existant qui pouvait être réutiliser, ce qui posait problème. De plus, le M5 Stack Dial n'était pas adapté à notre projet.

À la fin, nous sommes passer au M5 Stack Fire. Le Fire, avec ça forme cubique, son écran assez grand ainsi que les boutons facile à manipuler, était le choix idéal pour notre projet. Elle embarquait également une carte Wi-Fi, un réseau Bluetooth, des périphériques GPIO, UART, I2C ce qui allait nous être utile.

***

### Capteur fin de course

Les capteurs de fin de course ont constitué une étape essentiel lors de cette SAE, en effet, comme leurs noms l'indique ils sont placé en fin de course, c'est-à-dire en bout de parcours de notre bras robot. Chacun des moteurs du bras robot possédait un capteurs de fin de course. Leurs but était de stoper le mouvement d'un des moteurs afin que le moteurs ne force pas sur les pièces du bras et donc n'endommage pas le bras robot. Le principe de codage était très simple, Tant que le capteur est inactif, le moteur conitue son chemin, dès lors que le capteur est actif le moteur s'arrête. Tant que le capteur est actif, le moteur ne pourra plus effectuer de rotation vers le capteur, le seul moyen est de simplement faire donctionner le moteur dans l'autre sens afin de déploquer le capteur. Grâce à cela nous avons pu mettre en place un programme de "position initial". Nous avons juste définit cette position à l'aide des capteurs de fin de course en décidant de tous les activer dans un ordre spécifique afin que le bras ne frotte pas contre le sol. Le seul problème restant, c'est que même si le moteur s'arrête au contacte du capteur, il restera tout de même une inertie que le moteur ne peut pas arrêter tout seul. Nous verrons dans le paragraphe suivant comment cela a été contré.

***

### Commande de contre-inertie

//A vérifier (et embellir grammaticalement) La contre inertie constituerai a envoyer au pont en H (le pont en h utilise des l298n qui a 2 pont en h) sur les 2 pin d'un même moteur (exemple in1A et IN2A) un courant, sela causera un court circuit volontaire au niveau des borne du moteur et le fera freiner.

Pour contrer l'inertie que nos moteurs avaient lorsque le boutons d'activation n'était plus actif ou encore quand un capteur était actif, nous avions pensé à plusieurs solutions:

- La première était de remplacer nos moteurs par des servo-moteurs, mais il aurait fallu changer toute la structure du robot et ce n'était pas ce que nous recherchions dans le projet.

- La seconde était de créer un programme qui lorsque le boutons est relaché, pendant un court temps on envoie un signal de tension négatif afin de compenser cette fameuse inertie qui nous enlève énormément de précision lors de manipulation et qui pourrait endommager les moteurs. 

- Et la troisième qui était d'étudier les ponts en H à notre disposition afin d'effectuer la même manipulation que la seconde solution mais non directement via programme.Le principe d'utilisation est de causer un court-circuit volontaire au niveau des bornes du moteur et donc le faire freiner. Cette manipulation fonctionne sur les deux pins d'un même moteur (par exemple: In1A et In2A), le pont en H utilise un 1298n qui a deux pont en H en lui.

Nous n'avons hélas pensé bien trop tard à la troisième solution mais c'est probablement celle qui marcherais le mieux dans le cadre de cette SAE et ce qui serais le plus simple

***

### Vidéo de fonctionnement

***
