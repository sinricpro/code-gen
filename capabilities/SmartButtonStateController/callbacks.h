// SmartButtonStateController
bool onButtonPress(const String& deviceId, SmartButtonPressType pressType) {
  switch (pressType) {
    case SmartButtonPressType::SINGLE_PRESS:
      // Handle single press
      break;
    case SmartButtonPressType::DOUBLE_PRESS:
      // Handle double press
      break;
    case SmartButtonPressType::LONG_PRESS:
      // Handle long press
      break;
  }

  return true;  // request handled properly
}
