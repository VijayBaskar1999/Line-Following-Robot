/*void setup() {
  // put your setup code here, to run once:
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
pinMode(8,INPUT);
pinMode(9,OUTPUT);
pinMode(11,INPUT);
pinMode(12,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(9,HIGH);           //left ir transmittor
digitalWrite(12,HIGH);         //right ir transmittor
int x=digitalRead(8);          //left ir receiver
int y=digitalRead(11);          //right ir receiver
Serial.println(x);
Serial.println(y);
Serial.println('\n');
if(x==1&&y==1)
{
  analogWrite(3,50);
  analogWrite(5,0);
  analogWrite(6,50);
  analogWrite(10,0);  
}
else if(x==0)
{
  analogWrite(5,100);
  analogWrite(3,0);
  analogWrite(6,100);
  analogWrite(10,0);
}
else if(y==0)
{
  analogWrite(3,100);
  analogWrite(5,0);
  analogWrite(10,100);
  analogWrite(6,0);
}
delay(20);
}*/
