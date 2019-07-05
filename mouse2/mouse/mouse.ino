void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 String str="";
  int i,j=0,t=0;
  char n,m,p;
  while(Serial.available()>0)
  {
    t=1;
    str+=char(Serial.read());
    j++;
  }
  if(t)
  {
    for(i=0;i<j;i++)
    {
      switch(str[i])
      {case 97:dot();dash();break;
       case 98:dash();dot();dot();dot();break;
       case 99:dash();dot();dash();dot();break;
       case 100:dash();dot();dot();break;
       case 101:dot();
       case 102:dot();dot();dash();dot();break;
       case 103:dash();dash();dot();break;
       case 104:dot();dot();dot();dot();break;
       case 105:dot();dot();break;
       case 106:dot();dash();dash();dash();break;
       case 107:dash();dot();dash();break;
       case 108:dot();dash();dot();dot();break;
       case 109:dash();dash();break;
       case 110:dash();dot();break;
       case 111:dash();dash();dash();break;
       case 112:dot();dash();dash();dot();break;
       case 113:dash();dash();dot();dash();break;
       case 114:dot();dash();dot();break;
       case 115:dot();dot();dot();break;
       case 116:dash();break;
       case 117:dot();dot();dash();break;
       case 118:dot();dot();dot();dash();break;
       case 119:dot();dash();dash();break;
       case 120:dash();dot();dot();dash();break;
       case 121:dash();dot();dash();dash();break;
       case 122:dash();dash();dot();dot();break;
       case 32:w_space();break;
      }
      c_space();
    }
  }
delay(3000);
}
void dot()
{
  digitalWrite(13,HIGH);
  delay(250);
  digitalWrite(13,LOW);
  delay(250);
}

void dash()
{
  digitalWrite(13,HIGH);
  delay(250*4);
  digitalWrite(13,LOW);
  delay(250);
}

void c_space()
{
  digitalWrite(13,LOW);
  delay(250*3);
}

void w_space()
{
  digitalWrite(13,LOW);
  delay(250*7);
}
