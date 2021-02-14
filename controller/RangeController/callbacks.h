// RangeController

bool onRangeValue(const String &deviceId, const String& instance, int &rangeValue) {
  Serial.printf("Device %s %s-rangeValue changed to %d\r\n", deviceId.c_str(), instance.c_str(), rangeValue);
  globalRangeValues[instance] = rangeValue;
  return true;
}