void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // you can use any pin you want!.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  delay(500);
}
