// MediaController

void updateMedaState(String mediaState) {
  <%= device.deviceInstance %>.sendMediaControlEvent(mediaState);
}