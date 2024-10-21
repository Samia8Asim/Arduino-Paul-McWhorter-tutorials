int red = 13, blue = 12 , green = 11; // variables for pin numbers
int red_time = 50, green_time =220, blue_time = 100;
int longW = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // make a loop for each LED to blink it as much as you want.

  for (int i = 0; i < 6; i++) {
    digitalWrite(red, HIGH);
    delay(red_time);
    digitalWrite(red, LOW);
    delay(red_time);
  }


  for (int i = 0; i < 15; i++) {
    digitalWrite(blue, HIGH);
    delay(blue_time);
    digitalWrite(blue, LOW);
    delay(blue_time);
  }

  for (int i = 0; i < 11; i++) {
    digitalWrite(green, HIGH);
    delay(green_time);
    digitalWrite(green, LOW);
    delay(green_time);
  }
  
  delay(longW);
}
