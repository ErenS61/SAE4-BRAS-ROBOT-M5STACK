void setup() {
  // Initialiser la communication série
  Serial.begin(9600); // Définir le baud rate de communication
  //Serial2.begin(9600); // Initialiser la deuxième liaison série
}

void loop() {
  // Vérifier s'il y a des données disponibles sur le port série
  if (Serial.available() > 0) {
    // Lire les données reçues
    byte receivedByte = Serial.read();

    // Envoyer les données reçues à PuTTY
    Serial.print((char)receivedByte);

    // Vérifier si les données reçues sont 0x05
    if (receivedByte == 0x05) {
      // Envoyer 0xAA en continu
      while (true) {
        Serial.write(0xAA);

        // Ajouter un délai pour éviter de saturer la liaison
        delay(10);

        // Vérifier s'il y a de nouvelles données reçues
        if (Serial.available() > 0) {
          // Lire les nouvelles données reçues
          byte newReceivedByte = Serial.read();

          // Si une nouvelle commande est reçue, quitter la boucle continue
          if (newReceivedByte != 0x05) {
            break;
          }
        }
      }
    }
  }
}
