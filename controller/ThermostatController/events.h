// ThermostatController

void updateTargetTemperature(int temperature) {
  <%= device.deviceInstance %>.sendTargetTemperatureEvent(temperature);
}

void updateThermstatMode(String mode) {
  <%= device.deviceInstance %>.sendThermostatModeEvent(mode);
}