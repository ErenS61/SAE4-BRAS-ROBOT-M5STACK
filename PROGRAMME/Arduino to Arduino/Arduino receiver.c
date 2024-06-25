void setup() {
  // Initialisation des ports série
  Serial.begin(9600);    // Port série principal pour le débogage
  Serial1.begin(9600);   // Port série secondaire (UART1)
  
  // Message de démarrage
  Serial.println("Receiver Ready");
}

void loop() {
  // Vérification s'il y a des données disponibles via UART1
  if (Serial1.available()) {
    String receivedData = Serial1.readStringUntil('\n');
    Serial.print("Received: ");
    Serial.println(receivedData);
  }
}
