#include <EEPROM.h>

struct st_wifi {
  char ssid[64];
  char pass[64];
};

void setup() {
  EEPROM.begin(128);
  st_wifi buf;
  EEPROM.get<st_wifi>(0, buf);
//  WiFi.begin ( buf.ssid, buf.pass );
  Serial.begin(115200);
  Serial.println("Really?");
  Serial.println(buf.ssid);
  Serial.println(buf.pass);
}

void loop() {
}
