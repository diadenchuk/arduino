#include <LiquidCrystal.h> // includes the LiquidCrystal Library
#include <dht.h>

#define ENABLE 11
#define DIRA 10
#define DIRB 12

#define dataPin 8
LiquidCrystal lcd(1, 2, 4, 5, 6, 7); // Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
dht DHT;

int i;


void setup() {
  pinMode(ENABLE, OUTPUT);
  pinMode(DIRA, OUTPUT);
  pinMode(DIRB, OUTPUT);
  // Serial.begin(9600);
  lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display
}

void loop() {
  int readData = DHT.read11(dataPin);
  float t = DHT.temperature;
  float h = DHT.humidity;
  lcd.setCursor(0,0); // Sets the location at which subsequent text written to the LCD will be displayed
  lcd.print("Temp.: "); // Prints string "Temp." on the LCD
  lcd.print(t); // Prints the temperature value from the sensor
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Humi.: ");
  lcd.print(h);
  lcd.print(" %");

  digitalWrite(DIRA, LOW);
  digitalWrite(DIRB, HIGH);
  if(t >= 26) {
    analogWrite(ENABLE, 185);
  }
  if(t == 25)
  {
    analogWrite(ENABLE, 120);
  }

  if(t <= 24)
  {
    digitalWrite(ENABLE, LOW);
  }
  // analogWrite(ENABLE, 255);
  // digitalWrite(DIRA, LOW);
  // digitalWrite(DIRB, HIGH);
  // delay(2000);
  // digitalWrite(ENABLE, LOW);
  // delay(2000);
  // analogWrite(ENABLE, 180);
  // digitalWrite(DIRA, HIGH);
  // digitalWrite(DIRB, LOW);

  // delay(3000);
  // analogWrite(ENABLE, 180);
  // delay(2000);
  // analogWrite(ENABLE, 128);
  // delay(2000);
  // digitalWrite(DIRA, LOW);
  //delay(2000);
  // delay(2000);
  // analogWrite(ENABLE, 128);
  // delay(2000);
  // analogWrite(ENABLE, 180);
  //delay(2000);
  //digitalWrite(ENABLE, LOW);
  
  // Serial.print("Temperature = ");
  // Serial.print(t);
  // Serial.print(" *C ");
  // Serial.print("    Humidity = ");
  // Serial.print(h);
  // Serial.println(" % ");
  delay(2000);
}