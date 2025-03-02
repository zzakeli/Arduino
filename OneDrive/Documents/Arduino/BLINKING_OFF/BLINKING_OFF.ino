int PIN = 7;
int BUTTON = 4;
bool SWITCH = true;

void setup() {
  pinMode(PIN, OUTPUT);
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(BUTTON) == HIGH){
    SWITCH = !SWITCH;
    Serial.println(SWITCH);
    delay(100);
  }

  if(SWITCH == true){
    digitalWrite(PIN, LOW);
  }else{
    digitalWrite(PIN, LOW);
    delay(100);
    digitalWrite(PIN, HIGH);
    delay(100);
  }

}
