
int led = 13;
int sensor = 12;
int state = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(9600);

}

void loop() {
  buttonState = digitalRead(sensor);

  if (state == HIGH) {
    digitalWrite(led, HIGH);
    delay(200);

  }
 
 else {
    digitalWrite(led, LOW);
    delay(200);

  }
}
