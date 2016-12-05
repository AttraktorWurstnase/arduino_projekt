void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  delay(100);
}
