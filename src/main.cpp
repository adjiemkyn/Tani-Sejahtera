#include <Arduino.h>
#include <WiFi.h>

const char *ssid = "CW 10";        // Your WiFi SSID
const char *password = "gitadinda"; // Your

void setup()
{
  Serial.begin(115200);

  // Connect to WiFi
  Serial.printf("Connecting to %s\n", ssid);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }

  // If successfully connected
  Serial.println("\nWiFi connected");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  // Yo ur main code goes here
  // Example: send sensor data, control actuators, etc.
}