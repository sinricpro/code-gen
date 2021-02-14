// ColorTemperatureController

bool onColorTemperature(const String &deviceId, int &colorTemperature) {
  Serial.printf("Device %s colorTemperature is set to %i\r\n", deviceId.c_str(), colorTemperature);
  return true; // request handled properly
}

bool onIncreaseColorTemperature(const String &deviceId, int &colorTemperature) {
  globalColorTemperature += 1000; // increase globalColorTemperature about 1000;
  Serial.printf("Device %s colorTemperature changed to %i\r\n", deviceId.c_str(), colorTemperature);
  colorTemperature = globalColorTemperature; // return new colorTemperature
  return true; // request handled properly
}

bool onDecreaseColorTemperature(const String &deviceId, int &colorTemperature) {
  globalColorTemperature -= 1000; // decrease globalColorTemperature about 1000;
  Serial.printf("Device %s colorTemperature changed %i\r\n", deviceId.c_str(), colorTemperature);
  colorTemperature = globalColorTemperature; // return new colorTemperature
  return true; // request handled properly
}