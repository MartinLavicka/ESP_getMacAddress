// Get mac addres without separators :
//
#include <ESP8266WiFi.h>

byte mac[6];

void setup() {
  Serial.begin(115200);
  String mymac = getMacAddress();   // my mac is only local variable
  Serial.println(mymac);

}

void loop() {
  // put your main code here, to run repeatedly:
}

String getMacAddress() {
  WiFi.macAddress(mac);
  String cMac = "";
  for (int i = 0; i < 6; ++i) {
    cMac += String(mac[i],HEX);
    //if(i<5)
      //cMac += "-";      // Add separators
  }
  //cMac.toUpperCase();     // to upper case
  return cMac;
}
