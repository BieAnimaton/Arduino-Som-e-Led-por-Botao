void setup() {
  pinMode(ledPin, OUTPUT);

  for (int i = 0; i < 3; i++) {
    pinMode(buttonPin[i], INPUT);
  }

  pinMode(speakerPin, OUTPUT);
}
