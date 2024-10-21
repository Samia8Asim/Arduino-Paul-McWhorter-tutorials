// Variables tut (with some Mores code!)

// we can have int , float and string as variables types in Arduino

int redPin = 13; // set variable for pin number in case you change it
int dtime1 = 50; // set variable for delay time for s letter in case you change it
int dtime2 = 250; // set variable for delay time for o letter in case you change it
int longW = 1000; // long delay at the end

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // note : thit tut was before learning the concept of loops thats why it has a lot of repeats
  // first three codes for the s letter 
  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  // then three for o letter

  digitalWrite(redPin, HIGH);
  delay(dtime2);
  digitalWrite(redPin, LOW);
  delay(dtime2);

  digitalWrite(redPin, HIGH);
  delay(dtime2);
  digitalWrite(redPin, LOW);
  delay(dtime2);

  digitalWrite(redPin, HIGH);
  delay(dtime2);
  digitalWrite(redPin, LOW);
  delay(dtime2);

  // three more for s

  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  digitalWrite(redPin, HIGH);
  delay(dtime1);
  digitalWrite(redPin, LOW);
  delay(dtime1);

  delay(longW);

}
