#define ARDUINO_WATCHY_V20

#include "Arduino.h"

#include "GxEPD2_BW.h"
#include "sprites.h"
#include "pokemons.h"
#include "Display.h"

/** In microseconds */
unsigned long start;
/** In microseconds */
unsigned long frametime = (1 / 30.f) * 1000 * 1000;
unsigned long frame_count = 0;

static Display display;

void setup() {
// put your setup code here, to run once:
    Serial.begin(115200);
    Serial.println("Hello, World!");
    display.epd2.initDefault();
    start = millis();
    display.setFullWindow();
    display.fillScreen(GxEPD_WHITE);
    display.drawFrontSprite(Pokemon::Dragonite, 87, 0);
    display.drawBackSprite(Pokemon::Dragonite, 0, 64);
    display.drawFullScreen(Sprites::battle);
    display.display(false);
    esp_sleep_disable_wakeup_source(ESP_SLEEP_WAKEUP_ALL);
    esp_sleep_enable_ext1_wakeup(BTN_PIN_MASK, ESP_EXT1_WAKEUP_ANY_HIGH);
    esp_light_sleep_start();
}

void loop() {
    uint64_t wakeup_pin = esp_sleep_get_ext1_wakeup_status();
    Serial.printf("Woke up from sleep, pin status: %llu\n", wakeup_pin);

    if (wakeup_pin & UP_BTN_MASK) {
        Serial.println("UP Button pressed");
    }
    if (wakeup_pin & DOWN_BTN_MASK) {
        Serial.println("DOWN Button pressed");
    }
    Serial.flush();
    delay(1000);
    esp_light_sleep_start();
    // start = micros();





    // // ## End of frame
    // frame_count++;
    // const auto elapsed = micros() - start;
    // if (elapsed < frametime) {
    //     esp_sleep_enable_timer_wakeup((frametime - elapsed));
    //     esp_light_sleep_start();
    // }
}