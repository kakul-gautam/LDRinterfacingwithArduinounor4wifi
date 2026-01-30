#include <Arduino.h>
#define LDR_PIN A0

void setup() {
    Serial.begin(9600);
    while (!Serial);
    // write your initialization code here
}

void loop() {
    int ldrRaw = analogRead(LDR_PIN);
    int lightPercent = map(ldrRaw, 0, 1023, 0, 100);
    Serial.print("LDR Raw: ");
    Serial.println(ldrRaw);
    Serial.print("Light Percent: ");
    Serial.println(lightPercent);
    delay(500);
    // write your code here
}
