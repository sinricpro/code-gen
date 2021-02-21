// PercentageController
bool onSetPercentage(const String &deviceId, int &percentage) {
  Serial.printf("[Device: %s]: Percentage level set to %d\r\n", deviceId.c_str(), percentage);
  globalPercentage = percentage;
  return true; // request handled properly
}

bool onAdjustPercentage(const String &deviceId, int &percentageDelta) {
  globalPercentage += percentageDelta; // calculate absolute power level
  Serial.printf("[Device: %s]: Percentage level changed about %i to %d\r\n", deviceId.c_str(), percentageDelta, globalPercentage);
  percentageDelta = globalPercentage; // return absolute power level
  return true;                   // request handled properly
}