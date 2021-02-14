// ModeController

void updateMode(String instance, String mode) {
  <%= device.deviceInstance %>.sendModeEvent(instance, mode);
}