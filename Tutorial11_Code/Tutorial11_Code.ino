int j = 1;
int waitT = 750;
String mystr = "j = ";
int x = 3;
int y = 7;
int z;
String mystr2 = " + ";
String mess1 = "A Circle With Radius ";
String mess2 = " Has an Area of ";
float pi = 3.14;
float r = 2.0;
float area;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // baud rate make your code run faster or slower as you want.
}

void loop() {
  // put your main code here, to run repeatedly:

  // -- first part of code -- //
  //Serial.print(mystr);
  //Serial.println(j);
  //j++;
  //delay(waitT);

  // -- second part of the code -- //
  //z = x + y;
  //Serial.print(x);
  //Serial.print(mystr2);
  //Serial.print(y);
  //Serial.print(" = ");
  //Serial.println(z);
  //delay(waitT);

  // -- third part of the code -- //
  area = pi * r *r;
  Serial.print(mess1);
  Serial.print(r);
  Serial.print(mess2);
  Serial.print(area);
  Serial.println(".");
  delay(waitT);
  r += .5;
}
