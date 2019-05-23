#include <Arduino.h>
#include <ArduinoJson.h>



void setup()
{
StaticJsonDocument<200> doc;
String Jsondoc;
doc["deviceId"] = 1;
JsonArray readers = doc.createNestedArray("readers");
JsonObject reader = readers.createNestedObject();
JsonObject reader1 = readers.createNestedObject();
JsonArray items = readers.createNestedArray();
JsonObject item1 = items.createNestedObject();
JsonObject item2 = items.createNestedObject();
item1["rfid"] = "awdawdadadaw";
item1["rfid"] = "5684658555";

reader["item"] = item1;
reader1["item"] = item2;

serializeJson(doc,Jsondoc);
Serial.begin(115200);
Serial.println(Jsondoc);

}
void loop()
{



}