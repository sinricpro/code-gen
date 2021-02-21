// TemperatureSensor
void updateTemperature(float temperature, float humidity) {
  <%= device.deviceInstance %>.sendTemperatureEvent(temperature, humidity);
}