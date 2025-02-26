// OpenCloseController
bool onDirectionOpenClose(const String& deviceId, const String& openDirection, int& openPercent) {
  Serial.printf("Open direction to %s, percent %d\r\n", openDirection.c_str(), openPercent);
  return true;
}
 
bool onOpenClose(const String& deviceId, int& openPercent) {
  Serial.printf("Open percent %d\r\n", openPercent);
  return true;
}
