// OpenCloseController
bool onOpenClose(const String& deviceId, const String& openDirection, int& openPercent) {
  Serial.printf("Open direction to %s, percent %d\r\n", openDirection.c_str(), openPercent);
  return true;
}
