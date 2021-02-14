// PowerStateController

void updatePowerState(bool state) {
  <%= device.deviceInstance %>.sendPowerStateEvent(state);
}