// VolumeController
bool onSetVolume(const String &deviceId, int &volume) {
  Serial.printf("[Device: %s]: Volume set to %d\r\n", deviceId.c_str(), volume);
  globalVolume = volume;
  return true; // request handled properly
}

bool onAdjustVolume(const String &deviceId, int &volumeDelta, bool volumeDefault) {
  globalVolume += volumeDelta;  // calculate absolute volume
  Serial.printf("[Device: %s]: Volume changed about %i to %d (default: %s)\r\n", deviceId.c_str(), volumeDelta, globalVolume, volumeDefault ? "true" : "false");
  volumeDelta = globalVolume; // return absolute volume
  return true; // request handled properly
}