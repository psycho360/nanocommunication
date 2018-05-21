#include<SoftwareSerial.h>
SoftwareSerial sen(2,3); 
char str[]={'1','2','3','4'};
int i=0;
void setup() {
  Serial.begin(9600);
  sen.begin(9600);
}

void loop() {
  if(sen.available())
  {
    if(i>3)i=0;
    char c=sen.read();
   delay(10);
    if(c==str[i])
      {sen.write(str[i]);
      i++;
      delay(10);}
  }
}
