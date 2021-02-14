// ColorController

bool onColor(const String &deviceId, byte &r, byte &g, byte &b) {
  Serial.printf("Device %s color is set to red=%d, green=%d, blue=%d\r\n", deviceId.c_str(), r, g, b);
  color.r = r;
  color.g = g;
  color.b = b;
  return true; // request handled properly
}