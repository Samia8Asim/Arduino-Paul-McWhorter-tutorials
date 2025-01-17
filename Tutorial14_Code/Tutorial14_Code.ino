int potPin = A1; // potentiometer pin to read from
int gPin = 6; // LED pin to Write to
int potVal; // potentiometer value
float ledVal; // value to write to LED 

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(gPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin); 
  ledVal = (255./1023.) * potVal; // using line equation to find the led value
  analogWrite(gPin, ledVal); // write the valus to the green LED.
  Serial.println(ledVal);
}
