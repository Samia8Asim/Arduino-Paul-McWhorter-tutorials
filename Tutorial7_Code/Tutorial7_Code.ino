int redPin = 9;
int bright = 127; // control the brightness of the LED
void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin, bright); // first parameter is the pin number and the seconed parameter is a number between 0 - 255
}
