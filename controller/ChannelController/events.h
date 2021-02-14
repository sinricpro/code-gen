// ChannelController

void updateChannel(String channelName) {
  <%= device.deviceInstance %>.sendChangeChannelEvent(channelName);
}