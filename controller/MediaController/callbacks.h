// MediaController
bool onMediaControl(const String &deviceId, String &control) {
  Serial.printf("[Device: %s]: Media control \"%s\" activated\r\n", deviceId.c_str(), control.c_str());
  mediaControlState = control;
  return true;
}