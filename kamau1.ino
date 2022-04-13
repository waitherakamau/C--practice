// C++ code
//
int red =11;
int red2 =3;
int yellow =10;
int yellow2 =2;
int green =9;
int green2 =1;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(red2,OUTPUT); 
  pinMode(yellow,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(green2,OUTPUT);
  
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(green2,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(green2,LOW);
  delay(1000);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow2,HIGH);
  delay(1000);
  digitalWrite(yellow,LOW);
  delay(500);
  digitalWrite(yellow2,LOW);
  delay(500);
  digitalWrite(red2,HIGH);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(1000);
   digitalWrite(red2,LOW);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(red2,LOW);
  delay(500);
  digitalWrite(yellow2,LOW);
  delay(500);
}  