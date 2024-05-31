#include<LiquidCrystal.h>
int contrast=75;
LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  Serial.begin(9600);
analogWrite(6,contrast);
lcd.begin(16,2);
}

void loop() {
lcd.setCursor(0,0);
lcd.print("hello world");
delay(5000);
lcd.setCursor(0,1);
lcd.print("hemanth");
delay(5000);

}
