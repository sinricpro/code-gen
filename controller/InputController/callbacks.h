// InputController

bool onSelectInput(const String &deviceId, String &input) {
  Serial.printf("Device %s input changed to %s\r\n", deviceId.c_str(), input.c_str());
  globalInput = input;
  return true;
}