// ColorTemperatureController

void updateColorTemperature(int colorTemperature) {
  <%= device.deviceInstance %>.sendColorTemperatureEvent(colorTemperature);
}