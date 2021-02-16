
#include <Ubidots.h>

const char* UBIDOTS_TOKEN = "...";  // Put here your Ubidots TOKEN
const char* WIFI_SSID = "...";      // Put here your Wi-Fi SSID
const char* WIFI_PASS = "...";      // Put here your Wi-Fi password 

Ubidots ubidots(UBIDOTS_TOKEN, UBI_HTTP);

int var_poten;


void setup() {    
   Serial.begin(115200);
  ubidots.wifiConnect(WIFI_SSID, WIFI_PASS);
  // ubidots.setDebug(true);  // Uncomment this line for printing debug  messages   
  var_poten=0;                
 }

void loop() {
  var_poten = analogRead(A0);
  Serial.println(var_poten);

  ubidots.add("var_poten", var_poten);// Change for your variable name 

  bool bufferSent = false;
  bufferSent = ubidots.send(); // Will send data to a device label that matches the device Id

   if (bufferSent) {
  // Do something if values were sent properly
   Serial.println("Values sent by the device");
  }
  delay(1000);
  
  
}
