// EqualizerController
bool onSetBands(const String &deviceId, const String& bands, int &level) {
  bandsLevel[bands] = level;
  Serial.printf("[Device: %s]: Equalizer (%s) level set to %d\r\n", deviceId.c_str(), bands.c_str(), level);
  return true;
}

bool onAdjustBands(const String &deviceId, const String& bands, int &levelDelta) {
  bandsLevel[bands] += levelDelta;
  Serial.printf("[Device: %s]: Equalizer (%s) level changed about %d to %d\r\n", deviceId.c_str(), bands.c_str(), levelDelta, bandsLevel[bands]);
  levelDelta = bandsLevel[bands];
  return true;
}

bool onResetBands(const String &deviceId, const String& bands, int &level) {
  bandsLevel[bands] = 0;
  level = bandsLevel[bands];
  Serial.printf("[Device: %s]: Equalizer (%s) level reset to %d\r\n", deviceId.c_str(), bands.c_str(), level);
  return true;
}