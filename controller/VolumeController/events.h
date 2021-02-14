// VolumeController

void updateVolume(int volume) {
  <%= device.deviceInstance %>.sendVolumeEvent(volume);
}