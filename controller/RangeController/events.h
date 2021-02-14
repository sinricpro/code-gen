// RangeController

void updateRangeValue(String instance, int value) {
  <%= device.deviceInstance %>.sendRangeValueEvent(instance, value);
}