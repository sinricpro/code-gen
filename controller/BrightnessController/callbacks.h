// BrightnessController

bool onBrightness(const String &deviceId, int &brightness) {
  Serial.printf("Device %s brightness %d\r\n", deviceId.c_str(), brightness);
  globalBrightness = brightness;
  return true; // request handled properly
}

bool onAdjustBrightness(const String &deviceId, int &brightnessDelta) {
  globalBrightness += brightnessDelta; // calculate absolute brigthness
  Serial.printf("Device %s brightness changed about %i to %d\r\n", deviceId.c_str(), brightnessDelta, globalBrightness);
  brightnessDelta = globalBrightness; // return absolute brightness
  return true; // request handled properly
}