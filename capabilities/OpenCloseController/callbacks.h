// OpenCloseController
bool onOpenClose(const String& deviceId, int& openPercent) {
  Serial.printf("Open percent %d\r\n", openPercent);
  return true;
} 

bool onDirectionOpenClose(const String& deviceId, const String& openDirection, int& openPercent) {
  Serial.printf("Open direction to %s, percent %d\r\n", openDirection.c_str(), openPercent);
  return true;
}

bool onAdjustOpenClose(const String& deviceId, int& openRelativePercent) {
  Serial.printf("Open adjusted %d\r\n", openRelativePercent);
  //openRelativePercent = openPercent; // return absolute open percent device has been set to.
  return true;
}

bool onAdjustDirectionOpenClose(const String& deviceId, const String& openDirection, int& openRelativePercent) {
  Serial.printf("Open adjusted in direction %s, relatively %d\r\n", openDirection.c_str(), openRelativePercent);
  //openRelativePercent = openPercent; // return absolute open percent device has been set to.
  return true;
}
