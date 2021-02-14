// ChannelController

const char* channelNames[] = {
  "A/V",
  "ard", 
  "ZDF", 
  "n. d. r.", 
  "kabel eins", 
  "VOX", 
  "Sat.1", 
  "ProSieben", 
  "rtl", 
  "RTL II", 
  "SUPER RTL", 
  "KiKA"
};

#define MAX_CHANNELS sizeof(channelNames) / sizeof(channelNames[0])

unsigned int tvChannel; // current channel selected
std::map<String, unsigned int> channelNumbers;

void setupChannelNumbers() {
  for (unsigned int i=0; i < MAX_CHANNELS; i++) {
    channelNumbers[channelNames[i]] = i;
  }
}