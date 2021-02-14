// PowerLevelController

void updatePowerLevel(int level) {
  <%= device.deviceInstance %>.sendPowerLevelEvent(level);
}