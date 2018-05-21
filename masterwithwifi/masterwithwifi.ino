#include<SoftwareSerial.h>
SoftwareSerial rec(2,3); 
char temp[]={'1','2','3','4'};
char str[5];
int count=1;
void setup() {
  Serial.begin(9600);
  rec.begin(9600);
}

void loop() {
  if(count>8)count=1;
  if(count<5){
   rec.write(temp[count-1]); 
   delay(10);
  if (rec.available()) {
     str[0] = rec.read();
  }
    delay(10);
    Serial.println(str[0]);
}else {
  Serial.print("master ");
  Serial.println(count);
}
 count++;
}
