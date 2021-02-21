// MotionSensor
void updateMotion(bool detected) {
  <%= device.deviceInstance %>.sendMotionEvent(detected);
}