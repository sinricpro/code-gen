// PushNotificationController
void sendPushNotification(String notification) {
  <%= device.deviceInstance %>.sendPushNotification(notification);
}