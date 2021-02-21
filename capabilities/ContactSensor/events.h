// ContactSensor
void updateContactState(bool detected) {
  <%= device.deviceInstance %>.sendContactEvent(detected);
}