
const int sensorH1 = 9;
const int led =2;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorH1, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int estadoP1 = digitalRead(sensorH1);
  if(estadoP1 == LOW){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }

}
