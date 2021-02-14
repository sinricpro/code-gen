// ToggleController

void updateToggleState(String instance, bool state) {
  <%= device.deviceInstance %>.sendToggleStateEvent(instance, state);
}