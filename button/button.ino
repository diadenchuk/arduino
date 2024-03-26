void setup() {
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
  // Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(2) == HIGH){
    digitalWrite(12, HIGH);
  } 
  // Serial.print(digitalRead(2));
  // Serial.print("/n");

  if(digitalRead(2) == LOW){
    digitalWrite(12, LOW);
  }
}
