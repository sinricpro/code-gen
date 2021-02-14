// LockController

void updateLockState(bool locked) {
  <%= device.deviceInstance %>.sendLockStateEvent(locked);
}