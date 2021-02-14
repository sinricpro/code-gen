// ToggleController

bool onToggleState(const String& deviceId, const String& instance, bool &state) {
  Serial.printf("Device %s %s-state set to %s\r\n", deviceId.c_str(), instance.c_str(), state?"true":"false");
  globalToggleStates[instance] = state;
  return true;
}