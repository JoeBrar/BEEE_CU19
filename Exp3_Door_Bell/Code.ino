
CODE FOR EXP-3




void setup()
{
  pinMode(4, OUTPUT);
  pinMode(10, INPUT);
}

void loop()
{
  int a=digitalRead(10);
if(a==HIGH)
{
 digitalWrite(4,HIGH);
 
}
  else
  {
    digitalWrite(4,LOW);
  }
}
