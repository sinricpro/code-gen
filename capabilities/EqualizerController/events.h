// EqualizerController
void updateBands(String bands, int level) {
  <%= device.deviceInstance %>.sendBandsEvent(bands, level);
}