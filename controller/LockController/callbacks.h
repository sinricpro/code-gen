// LockController

bool onLockState(const String &deviceId, bool &state) {
  Serial.printf("Device %s is %s\r\n", deviceId.c_str(), state?"locked":"unlocked");
  lockState = state;
  return true;
}