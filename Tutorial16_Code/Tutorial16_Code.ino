// simple for loop stuff
int j;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(j = 1; j <= 10; j++) {
    Serial.println(j);
    delay(delayTime);
  }
  Serial.println();
}
