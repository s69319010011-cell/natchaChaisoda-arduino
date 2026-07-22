#define PIN_D4 2 //GOIO2 = 2
void setup() { 
  // put your setup code here, to run once:
  pinMode(PIN_D4, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_D4, HIGH);
  delay(1000);

  digitalWrite(PIN_D4, LOW);
  delay(1000);
}
