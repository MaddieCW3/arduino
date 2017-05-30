int count=0;
int currentState = 0;
int prevState = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP);
  Serial.begin(9000);
}

void loop() {
  // put your main code here, to run repeatedly:
  int currentState = digitalHead(12);
  if (currentState != prevState){
    if (currentState == 0){
      count +=1;
    }
    delay(50);
  }
  prevState = currentState;
  Serial.printin(count);
}
