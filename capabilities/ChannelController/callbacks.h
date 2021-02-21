// ChannelController
bool onChangeChannel(const String &deviceId, String &channel) {
  tvChannel = channelNumbers[channel]; // save new channelNumber in tvChannel variable
  Serial.printf("[Device: %s]: Channel changed to \"%s\" (channel number %d)\r\n", deviceId.c_str(), channel.c_str(), tvChannel);
  return true;
}

bool onChangeChannelNumber(const String& deviceId, int channelNumber, String& channelName) {
  tvChannel = channelNumber; // update tvChannel to new channel number
  if (tvChannel < 0) tvChannel = 0;
  if (tvChannel > MAX_CHANNELS-1) tvChannel = MAX_CHANNELS-1;

  channelName = channelNames[tvChannel]; // return the channelName

  Serial.printf("[Device: %s]: Channel changed to %d (channel name \"%s\")\r\n", deviceId.c_str(), tvChannel, channelName.c_str());
  return true;
}

bool onSkipChannels(const String &deviceId, const int channelCount, String &channelName) {
  tvChannel += channelCount; // calculate new channel number
  if (tvChannel < 0) tvChannel = 0;
  if (tvChannel > MAX_CHANNELS-1) tvChannel = MAX_CHANNELS-1;
  channelName = String(channelNames[tvChannel]); // return channel name

  Serial.printf("[Device: %s]: Channel skipped about: %i (number: %i / name: \"%s\")\r\n", deviceId.c_str(), channelCount, tvChannel, channelName.c_str());

  return true;
}