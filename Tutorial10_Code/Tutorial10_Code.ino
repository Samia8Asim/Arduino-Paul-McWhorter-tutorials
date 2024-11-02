int readPin = A3;
int readVal; // value we read using analogRead which is a number between [0-1023]
float V2 = 0; // value in voltage
int dtime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  //set up serial monetor where we can print to it, takes one parameter which is baud rate (how quickly you talk with your serial monetor)
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin); // this will give us a value between [0-1023]
  V2 = (5./1023.) * readVal; // 5. float, beacuse sometimes int / int = zeroooo
  Serial.println(V2);
  delay(dtime);
}
