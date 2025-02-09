// StartStopController
bool onStartStop(const String& deviceId, bool &start) {
  Serial.printf("Set to %s\r\n", start ? "start" : "stop");
  return true;
}

bool onPauseUnpause(const String& deviceId, bool &pause) {
  Serial.printf("Set to %s\r\n", pause ? "pause" : "unpause");
  return true;
}
