void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); // we are working with pin 13 takes two parameters 1.pin NO. 2.input or output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // to turn LED on takes two parameters 1.pin NO. 2. on (HIGH) or off (LOW)
  delay(100); // a delay in ms
  digitalWrite(13, LOW);
  delay(900);
}
