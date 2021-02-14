// VolumeController

bool onSetVolume(const String &deviceId, int &volume) {
  Serial.printf("Device %s volume set to %d\r\n", deviceId.c_str(), volume);
  globalVolume = volume;
  return true; // request handled properly
}

bool onAdjustVolume(const String &deviceId, int &volumeDelta, bool volumeDefault) {
  globalVolume += volumeDelta;  // calculate absolute volume
  Serial.printf("Device %s volume changed about %i to %d (default: %s)\r\n", deviceId.c_str(), volumeDelta, globalVolume, volumeDefault);
  volumeDelta = globalVolume; // return absolute volume
  return true; // request handled properly
}