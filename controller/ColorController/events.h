// ColorController

void updateColor(byte r, byte g, byte b) {
  <%= device.deviceInstance %>.sendColorEvent(r, g, b);
}