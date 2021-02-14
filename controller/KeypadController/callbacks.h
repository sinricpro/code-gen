// KeypadController
bool onKeystroke(const String &deviceId, String &keystroke) {
  Serial.printf("[Device: %s]: Key %s have been pressed\r\n", deviceId.c_str(), keystroke.c_str());
  return true;
}