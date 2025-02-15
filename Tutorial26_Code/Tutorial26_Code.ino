// More Fun with Photo Resistors

int lightPin = A0;
int buzzPin = 9;
int lightVal;
int delayT;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzPin, OUTPUT);
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  // line equation for delay time of the buzzer
  delayT = ((9./800.)*lightVal) - (900./800.) + 1.; // get slope first and use point slope form

  digitalWrite(buzzPin, HIGH);
  delay(delayT);
  digitalWrite(buzzPin, LOW);
  delay(delayT);

}
