// SettingController
bool onSetSetting(const String &deviceId, const String &settingId, String &settingValue) {
  Serial.printf("[Device: %s]: Setting \"%s\" set to \"%s\"\r\n", deviceId.c_str(), settingId.c_str(), settingValue.c_str());
  globalSettings[settingId] = settingValue;
  return true;
}