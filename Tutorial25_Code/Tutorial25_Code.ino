// Understanding Photoresistors and Photo Detectors
int lightPin = A0;
int lightVal;
int greenPin = 9;
int redPin = 6;
int dv = 250;

void setup() {
  // put your setup code here, to run once:
  pinMode(lightPin, INPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(dv);

  // change acording to your Room light
  if (lightVal >= 700) {
    digitalWrite(greenPin, HIGH);
    digitalWrite(redPin, LOW);
  }

  if (lightVal < 700) {
    digitalWrite(greenPin, LOW);
    digitalWrite(redPin, HIGH);
  }
}
