// MuteController

void updateMuteState(bool muted) {
  <%= device.deviceInstance %>.sendMuteEvent(muted);
}