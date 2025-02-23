// OpenCloseController
bool onOpenClose(const String& deviceId, const String& openDirection, const int& openPercent) {
  Serial.printf("Open direction to %s, percent %n\r\n", openDirection, openPercent);
  return true;
}
 
