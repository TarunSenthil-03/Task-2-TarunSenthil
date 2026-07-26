const int sensorPin = A0;
const int relayPin = 8;
const int threshold = 500;

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(sensorPin);

  Serial.print("Moisture: ");
  Serial.println(moisture);

  if (moisture < threshold) {
    digitalWrite(relayPin, HIGH);
    Serial.println("Pump ON");
  } else {
    digitalWrite(relayPin, LOW);
    Serial.println("Pump OFF");
  }

  delay(1000);
}