#include <Arduino.h>
#include <ArduinoJson.h>


void setup()
{
StaticJsonDocument<900> doc;
String Jsondoc;
doc["deviceId"] = 1;
JsonArray readers = doc.createNestedArray("readers");


JsonObject readerFirst = readers.createNestedObject();
readerFirst["readerId"] = "994";
JsonArray firstItemArray = readerFirst.createNestedArray("items");
JsonObject innerFirstItem = firstItemArray.createNestedObject();
innerFirstItem["rfid"] = "firstValue rfid";

JsonObject readerSecond = readers.createNestedObject();
readerSecond["readerId"] = "261";
JsonArray secondItemArray = readerSecond.createNestedArray("items");
JsonObject innerSecondaryItem = secondItemArray.createNestedObject();
innerSecondaryItem["rfid"] = "second rfidValue";

JsonObject readerThird = readers.createNestedObject();
readerThird["readerId"] = "222";
JsonArray thirdItemArray = readerThird.createNestedArray("items");
JsonObject innerThirdItem = thirdItemArray.createNestedObject();
innerThirdItem["rfid"] = "third rfidValue";

JsonObject readerFour = readers.createNestedObject();
readerFour["readerId"] = "4444";
JsonArray fourItemArray = readerFour.createNestedArray("items");
JsonObject innerFourItem = fourItemArray.createNestedObject();
innerFourItem["rfid"] = "Four rfidValue";


serializeJson(doc,Jsondoc);
Serial.begin(115200);
Serial.println("---------------------------");
Serial.println(Jsondoc);

}
void loop()
{
}