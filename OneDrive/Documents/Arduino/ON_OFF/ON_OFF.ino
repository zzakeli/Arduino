
int PIN = 13; 
int BUTTON = 8;
bool SWITCH = true;
int num = 0;
void setup() {
  pinMode(PIN,OUTPUT);
  pinMode(BUTTON,INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(BUTTON) ==  HIGH){
    SWITCH = !SWITCH;
    delay(200);
  }
  digitalWrite(PIN, SWITCH);
}
