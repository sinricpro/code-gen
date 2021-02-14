// ThermostatController

bool onTargetTemperature(const String &deviceId, float &targetTemp) { 
  Serial.printf("Device %s target temperature set to %f\r\n", deviceId.c_str(), targetTemp);
  globalTargetTemp = targetTemp;
  return true; // request handled properly
}

bool onAdjustTargetTemperature(const String &deviceId, float &tempDelta) {
  globalTargetTemp += tempDelta; // change global target temperature about tempDelta
  Serial.printf("Device %s target temperature changed about %f to %f\r\n", deviceId.c_str(), tempDelta, globalTargetTemp);
  tempDelta = globalTargetTemp; // return absolute target temperature
  return true; // request handled properly
}

bool onThermostatMode(const String& deviceId, String& mode) {
  Serial.printf("Deivce %s thermostat mode set to %s\r\n", deviceId.c_str(), mode.c_str());
  globalThermostatMode = mode;
  return true; // request handled properly
}
