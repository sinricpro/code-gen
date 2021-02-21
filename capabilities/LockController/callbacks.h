// LockController
bool onLockState(const String &deviceId, bool &state) {
  Serial.printf("[Device: %s]: Lock set to %s\r\n", deviceId.c_str(), state ? "locked" : "unlocked");
  lockState = state;
  return true;
}