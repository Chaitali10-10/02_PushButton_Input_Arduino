// External Pull-Down Button Input
// Button -> Pin 2, +5V
// 10kΩ -> GND
// LED -> Pin 13

int buttonPin = 2;
int ledPin = 13;
int state;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  state = digitalRead(buttonPin);

  if (state == HIGH) {         // Button pressed
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
