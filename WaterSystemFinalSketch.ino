const int ledPin=13;
const int contactPin=4;
const int motorPinB=9;
const int motorPinA=10;
const int sensorPin = A0;

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.clear();
  lcd.backlight();
  
  digitalWrite(ledPin,LOW);
  pinMode(contactPin,INPUT);
  pinMode(motorPinB,OUTPUT);
  pinMode(motorPinA,OUTPUT);
  lcd.setCursor(0,0);
    lcd.println("state: Initial     ");
    lcd.setCursor(0,1);
    lcd.println("Level:        ");
  Serial.begin(9600);  
}

void loop() {
  // put your main code here, to run repeatedly:
  int waterLevel=digitalRead(contactPin);
  //Reading button state and the water level is important
  int sensorValue=analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue<300 && waterLevel==HIGH)
  {
    lcd.setCursor(0,0);
    lcd.println("state: Moist");
    lcd.setCursor(0,1);
    lcd.println("Level: Above  ");
    digitalWrite(motorPinB,LOW);
    digitalWrite(motorPinA,LOW);
    digitalWrite(ledPin,HIGH);
  }
  else if(sensorValue<300 && waterLevel==LOW)
  {
    lcd.setCursor(0,0);
    lcd.println("state: Moist");
    lcd.setCursor(0,1);
    lcd.println("Level: Below       ");
    digitalWrite(motorPinB,LOW);
    digitalWrite(motorPinA,LOW);
    digitalWrite(ledPin,HIGH);
  }
  else if(sensorValue>300 && waterLevel==HIGH)
  {
    lcd.setCursor(0,0);
    lcd.println("state: Dry         ");
    lcd.setCursor(0,1);
    lcd.println("Level: Above       ");
    digitalWrite(motorPinB,HIGH);
    digitalWrite(motorPinA,LOW);
    digitalWrite(ledPin,LOW);
  }
  else if(sensorValue>300 && waterLevel==LOW)
  {
    lcd.setCursor(0,0);
    lcd.println("state: Dry        ");
    lcd.setCursor(0,1);
    lcd.println("Level: Below      ");
    digitalWrite(motorPinB,LOW);
    digitalWrite(motorPinA,LOW);
    digitalWrite(ledPin,LOW);
  }

}
