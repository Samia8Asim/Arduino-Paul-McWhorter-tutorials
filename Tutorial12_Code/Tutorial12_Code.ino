int myVoltPin = A5;
int readVal;
float v2;
int dtime = 250;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(myVoltPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(myVoltPin);
  v2 = (5./1023.) * readVal;
  Serial.println(v2);
  delay(dtime);
}
