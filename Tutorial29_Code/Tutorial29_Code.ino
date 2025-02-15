// Using Push Buttons to Create Dimmable LED
int ledPin = 9;
int buttonPin1 = 12;
int buttonPin2 = 11;
int buzzPin = 3;
int buttonVal1;
int buttonVal2;
int dt = 500;
int ledBright = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.print("Button 1 = ");
  Serial.print(buttonVal1);
  Serial.print(", ");
  Serial.print("Button 2 = ");
  Serial.print(buttonVal2);
  Serial.println();
  delay(dt);

  if (buttonVal1 == 0) {
    ledBright += 20;
  }

  if (buttonVal2 == 0) {
    ledBright -= 20;
  }
 
  if (ledBright > 255) {
    ledBright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin,LOW);
    Serial.println("Buzz high");
  }

  if (ledBright < 0) {
    ledBright = 0;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin,LOW);
    Serial.println("Buzz low");
  }
  Serial.println(ledBright);

  analogWrite(ledPin, ledBright);
}
