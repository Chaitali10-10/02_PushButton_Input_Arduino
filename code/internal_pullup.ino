// Internal Pull-Up Button Input
// Button -> Pin 2, GND
// LED -> Pin 13

int buttonPin = 2;
int ledPin = 13;
int state;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  state = digitalRead(buttonPin);

  if (state == LOW) {        // Button pressed
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
