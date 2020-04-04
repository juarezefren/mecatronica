
#include <ESP8266WiFi.h>
#include <Ticker.h>

#define ledWifi D4

String ssid     = "ejcuthh";
String password = "12345678";

Ticker tic_WifiLed;

byte cont = 0;
byte max_intentos = 50;

void parpadeoLedWifi(){
  byte estado = digitalRead(ledWifi);
  digitalWrite(ledWifi,!estado);
}

void setup() {
  // Inicia Serial
  pinMode(ledWifi,OUTPUT);
  Serial.begin(115200);
  Serial.println("\n");

 tic_WifiLed.attach(0.2,parpadeoLedWifi);
 
  // Conexión WIFI
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED and cont < max_intentos) { //Cuenta hasta 50 si no se puede conectar lo cancela
    cont++;
    delay(500);
    Serial.print(".");
  }

 Serial.println("");
  if (cont < max_intentos) {  //Si se conectó      
      Serial.println("********************************************");
      Serial.print("Conectado a la red WiFi: ");
      Serial.println(WiFi.SSID());
      Serial.print("IP: ");
      Serial.println(WiFi.localIP());
      Serial.print("macAdress: ");
      Serial.println(WiFi.macAddress());
      Serial.println("*********************************************");
  }
  else { //No se conectó
      Serial.println("------------------------------------");
      Serial.println("Error de conexion");
      Serial.println("------------------------------------");
  }
  
  tic_WifiLed.detach();
  digitalWrite(ledWifi,HIGH);
}

void loop() {
}
