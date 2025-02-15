// Understanding and Using Active Buzzers to Add Sound to Your Project

int myNum;
int buzzPin = 8;
String msg = "please input your number: ";
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // ask
  Serial.println(msg);
  // wait
  while (Serial.available() == 0) {
    //nothing
  }
  // read
  myNum = Serial.parseInt();
  if (myNum > 10) {
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin, LOW);
  }
}
