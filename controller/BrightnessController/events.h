// BrightnessController

void updateBrightness(int brightness) {
  <%= device.deviceInstance %>.sendBrightnessEvent(brightness);
}