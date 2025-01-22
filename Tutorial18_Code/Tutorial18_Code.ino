int numBlinks;
String msg = "How many blinks do you want: ";
int bt = 500;
int redPin = 6;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // to get data from serial monitor you need three things

  // 1. ask for it
  Serial.println(msg);
  
  // 2. wait until data is entered.
  while (Serial.available() == 0) {
    // do nothing :)
  }

  // 3. read the number
  numBlinks = Serial.parseInt(); // if the number was float we use: Serial.parseFloat()
  for (int j = 1; j <= numBlinks; j++) {
    digitalWrite(redPin, HIGH);
    delay(bt);
    digitalWrite(redPin, LOW);
    delay(bt);
  }
}
