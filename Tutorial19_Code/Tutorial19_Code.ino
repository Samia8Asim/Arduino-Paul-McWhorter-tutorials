int greenPin = 11;
int redPin = 10;
int whitePin = 12;
String myColor;
String msg = "What Color LED do you want? ";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(whitePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // 1. ask
  Serial.println(msg);
  // 2. wait
  while (Serial.available() == 0) {
    // nothing just wait!!
  }
  // 3. read
  myColor = Serial.readString();
  
  if (myColor == "red" || myColor == "Red") {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(whitePin, LOW);
  }

  if (myColor == "green" || myColor == "Green") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(whitePin, LOW);
  }

  if (myColor == "white" || myColor == "White") {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(whitePin, HIGH);
  }

}
