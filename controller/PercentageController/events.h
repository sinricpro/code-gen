// PercentageController

void updatePercentage(int percentage) {
  <%= device.deviceInstance %>.sendSetPercentageEvent(percentage);
}