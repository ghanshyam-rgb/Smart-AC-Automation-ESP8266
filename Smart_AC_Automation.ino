#include <ESP8266WiFi.h>
#include <DHT.h>

// ----------- Pin Definitions -----------
#define DHTPIN D4        // DHT22 data pin
#define DHTTYPE DHT22    // Sensor type
#define RELAY_PIN D1     // Relay control pin

// ----------- Threshold -----------
#define TEMP_THRESHOLD 33.0   // Temperature to turn AC ON

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);  // Relay OFF initially (active LOW relay assumed)

  Serial.println("Smart AC Automation System Started");
}

void loop() {
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    delay(2000);
    return;
  }

  Serial.print("Room Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  if (temperature >= TEMP_THRESHOLD) {
    digitalWrite(RELAY_PIN, LOW);   // Turn AC ON
    Serial.println("AC TURNED ON");
  } else {
    digitalWrite(RELAY_PIN, HIGH);  // Turn AC OFF
    Serial.println("AC TURNED OFF");
  }

  delay(5000);  // Check every 5 seconds
}
