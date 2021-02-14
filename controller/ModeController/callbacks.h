// ModeController

bool onSetMode(const String& deviceId, const String& instance, String &mode) {
  Serial.printf("Device %s %s-mode set to %s\r\n", deviceId.c_str(), instance.c_str(), mode.c_str());
  globalModes[instance] = mode;
  return true;
}