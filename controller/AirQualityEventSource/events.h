// AirQualityEventSource

void updateAirQuality(int pm1, int pm2_5, int pm10) {
  <%= device.deviceInstance %>.sendAirQualityEvent(pm1, pm2_5, pm10);
}