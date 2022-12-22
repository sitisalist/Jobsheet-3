#include <WiFi.h>
// Replace with your network credentials (STATION)
const char* ssid = "hesti nabila 3";
const char* password = "1234567890";
void initWiFi() {
 WiFi.mode(WIFI_STA);
 WiFi.begin(ssid, password);
 Serial.print("Connecting to WiFi ..");
 while (WiFi.status() != WL_CONNECTED) {
 Serial.print('.');
 delay(1000);
 }
 Serial.println(WiFi.localIP());
}
void setup() {
 Serial.begin(115200);
 initWiFi();
 Serial.print("RRSI: ");
 Serial.println(WiFi.RSSI());
}
void loop() {
 // put your main code here, to run repeatedly:
}
