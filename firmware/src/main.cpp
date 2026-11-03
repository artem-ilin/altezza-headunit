// altezza-headunit firmware — skeleton (stage 1.1)
// Goal for now: prove the toolchain works (build, flash, serial monitor).

#include <Arduino.h>

static uint32_t lastTick = 0;

void setup() {
    Serial.begin(115200);
    delay(500);  // give USB CDC a moment; only place a blocking delay is ok
    Serial.println();
    Serial.println("altezza-headunit: boot");
}

void loop() {
    const uint32_t now = millis();
    if (now - lastTick >= 1000) {
        lastTick = now;
        Serial.printf("alive, uptime %lu s\n", now / 1000);
    }
}
