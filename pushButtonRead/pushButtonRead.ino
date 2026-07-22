// Lab 1 : Read Button
// Button -> GPIO4
// Serial Monitor : Pressed / Released

#define BUTTON_PIN D2

void setup() {
  Serial.begin(115200);

  // ใช้ Pull-up ภายใน ESP32
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.println("Lab 1 : Read Button");
}

void loop() {

  if (digitalRead(BUTTON_PIN) == LOW) {
    Serial.println("Pressed");
  } else {
    Serial.println("Released");
  }

  delay(200);
}