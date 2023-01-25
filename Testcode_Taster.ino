const int tasterPin = 2;   // Taster an Pin 2 anschließen
int tasterZustand = 0;       // Variable zum Speichern des Tasterzustands

void setup() {
  pinMode(tasterPin, INPUT);  // Pin als Eingang definieren
  Serial.begin(9600);         // Serielle Überwachung starten
}

void loop() {
  tasterZustand = digitalRead(tasterPin);  // Tasterzustand auslesen
  if (tasterZustand == HIGH) {            // Wenn Taster gedrückt wird
    Serial.println("Taster gedrückt");   // Ausgabe "Taster gedrückt"
  } else {
    Serial.println("Taster losgelassen"); // Ausgabe "Taster losgelassen"
  }
}
