void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}
byte luo=0;
void loop()
{
  if(Serial.available()>0)
  {
    luo = Serial.read();
    luo = luo - '0';
    digitalWrite(0,LOW);
    delay(10);
    if(luo & 0x1)
    {
      digitalWrite(1,HIGH);
    }
    else
    {
      digitalWrite(1,LOW);
    }
    if((luo>>1) & 0x1)
    {
      digitalWrite(2,HIGH);
    }
    else
    {
      digitalWrite(2,LOW);
    }
    if((luo>>2) & 0x1)
    {
      digitalWrite(3,HIGH);
    }
    else
    {
      digitalWrite(3,LOW);
    }
    if((luo>>3) & 0x1)
    {
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(4,LOW);
    }
    delay(10);
    digitalWrite(0,HIGH);
    delay(10);
  }
}
