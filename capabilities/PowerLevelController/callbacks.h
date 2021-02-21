// PowerLevelController
bool onPowerLevel(const String &deviceId, int &powerLevel) {
  Serial.printf("[Device: %s]: Powerlevel set to %d\r\n", deviceId.c_str(), powerLevel);
  globalPowerLevel = powerLevel;
  return true; // request handled properly
}

bool onAdjustPowerLevel(const String &deviceId, int &powerLevelDelta) {
  globalPowerLevel += powerLevelDelta; // calculate absolute power level
  Serial.printf("[Device: %s]: Powerlevel changed about %i to %d\r\n", deviceId.c_str(), powerLevelDelta, globalPowerLevel);
  powerLevelDelta = globalPowerLevel; // return absolute power level
  return true;                   // request handled properly
}