// InputController

void updateInput(String input) {
  <%= device.deviceInstance %>.sendSelectInputEvent(input);
}