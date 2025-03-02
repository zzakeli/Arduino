
int BUZZER = 9;
int POT_PIN = A0;
int value = 0;

void setup() {

}

void loop() {
  value = analogRead(POT_PIN);
  if(value < 1000){
    analogWrite(BUZZER, value);
  }
}
