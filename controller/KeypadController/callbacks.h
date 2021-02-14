// KeypadController

bool onKeyStroke(const String &deviceId, String &keystroke) {
  Serial.printf("Key %s have been pressed\r\n", keystroke.c_str());
  return true;
}