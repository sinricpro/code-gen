// PowerStateController

bool onPowerState(const String &deviceId, bool &state) {
  Serial.printf("Device %s turned %s\r\n", deviceId.c_str(), state?"on":"off");
  globalPowerState = state;
  return true; // request handled properly
}