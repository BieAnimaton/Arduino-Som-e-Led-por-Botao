void loop() {
  for (int i = 0; i < 3; i++) {
    buttonState[i] = digitalRead(buttonPin[i]);
  }

  musica();
}
