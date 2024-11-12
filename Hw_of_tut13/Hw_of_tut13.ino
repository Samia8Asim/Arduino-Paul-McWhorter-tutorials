int myVoltPin = A5;
int readVal;
float v2;
int dtime = 250;
int redPin = 9;
int yellowPin = 8;
int greenPin = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  v2 = (5./1023.) * readVal;
  Serial.println(v2);
  if (v2 < 3) {
    digitalWrite(greenPin, HIGH);
  }
  if (v2 > 3) {
    digitalWrite(greenPin, LOW);
  }

  if (v2 >= 3 && v2 <= 4) {
    digitalWrite(yellowPin, HIGH);
  }
  if (v2 < 3 || v2 > 4) {
    digitalWrite(yellowPin, LOW);
  }

  if (v2 > 4) {
    digitalWrite(redPin, HIGH);
  }
  if (v2 <= 4) {
    digitalWrite(redPin, LOW);
  }
  
  delay(dtime);
}