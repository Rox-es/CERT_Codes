void setup() {
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(1000);
}
