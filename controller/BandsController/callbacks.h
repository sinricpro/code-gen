// BandsController

bool onSetBands(const String &deviceId, const String& bands, int &level) {
  bandsLevel[bands] = level;
  return true;
}

bool onAdjustBands(const String &deviceId, const String& bands, int &levelDelta) {
  bandsLevel[bands] += levelDelta;
  levelDelta = bandsLevel[bands];
  return true;
}

bool onResetBands(const String &deviceId, const String& bands, int &level) {
  bandsLevel[bands] = 0;
  level = bandsLevel[bands];
  return true;
}