void setup() {
  // Initialisation des ports série
  Serial.begin(9600);    // Port série principal pour le débogage
  Serial1.begin(9600);   // Port série secondaire (UART1)
  
  // Message de démarrage
  Serial.println("Sender Ready");
}

void loop() {
  // Envoi du message via UART1 en continu
  Serial1.println("Hello from Arduino Sender!");
  Serial.println("Message Sent!");

  
  // Attendre un moment pour éviter l'envoi trop rapide
  delay(3000);  // Délai de 1 seconde (1000 ms)
}
