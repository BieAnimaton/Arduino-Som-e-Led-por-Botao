void musica() {
  if (buttonState[0] == HIGH) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 262);
  } else if (buttonState[1]) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 349);
  } else if (buttonState[2]) {
    digitalWrite(ledPin, HIGH);
    tone(speakerPin, 494);
  } else {
    noTone(speakerPin);
    digitalWrite(ledPin, LOW);
  }
}
