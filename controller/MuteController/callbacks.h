// MuteController

bool onMute(const String &deviceId, bool &mute) {
  Serial.printf("Device %s is %s\r\n", deviceId.c_str(), mute?"muted":"unmuted");
  muteState = mute;
  return true; // request handled properly
}