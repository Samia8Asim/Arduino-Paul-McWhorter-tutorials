// Understanding Passive Buzzers
int buzzPin = 8;
int potVal;
int potPin = A0;
int toneVal;
int buzzTime = 100;
int buzzTime2 = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  toneVal = ((9940./1023.) * potVal) + 60;

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(buzzTime);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(buzzTime);
}
