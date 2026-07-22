#define LED1 D1
#define BUTTON1 D2
#define LED2 D5
#define BUTTON2 D6

void setup() {

  pinMode(LED1, OUTPUT);

  pinMode(BUTTON1, INPUT_PULLUP);
pinMode(LED2, OUTPUT);

  pinMode(BUTTON2, INPUT_PULLUP);
}


void loop() {


  int button1 = digitalRead(BUTTON1);
  int button2 = digitalRead(BUTTON2);

  if (button1 == LOW) {

    digitalWrite(LED1, HIGH);
  
  }

  else {

    digitalWrite(LED1, LOW);
  
  }
  if (button2 == LOW) {

  
    digitalWrite(LED2, HIGH);
  }

  else {

  
    digitalWrite(LED2, LOW);
  }

}