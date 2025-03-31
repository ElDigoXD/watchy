#define ARDUINO_WATCHY_V20

#include <driver/rtc_io.h>
#include "Arduino.h"

#include "GxEPD2_BW.h"
#include "Adafruit_GFX.h"

#include "sprites/sprites.h"
#include "pokemons.h"
#include "Display.h"

/** In microseconds */
unsigned long start;
/** In microseconds */
unsigned long frametime = (1 / 30.f) * 1000 * 1000;
unsigned long frame_count = 0;

static Display display;

struct {
    Pokemon front_pokemon;
    Pokemon back_pokemon;

    bool is_japanese = true;
} state;

void setup() {

    state.front_pokemon = Pokemon::Dragonite;
    state.back_pokemon = Pokemon::Dragonite;

    Serial.begin(115200);
    Serial.println("Hello,\u4000World");
    display.epd2.initDefault();
    start = millis();
    display.setFullWindow();
    display.fillScreen(GxEPD_WHITE);
    display.setFont(&Sprites::font);
    display.setTextColor(GxEPD_BLACK);
    display.setTextSize(3);
    display.setCursor(0, 8*3);
    display.print("Hello, World!");
    // display.drawBackSprite(state.back_pokemon);
    // display.drawFrontSprite(state.front_pokemon);
    // display.drawFullScreen(Sprites::battle);
    display.display(false);
    esp_sleep_disable_wakeup_source(ESP_SLEEP_WAKEUP_ALL);
    esp_sleep_enable_ext1_wakeup(MENU_BTN_MASK | BACK_BTN_MASK | DOWN_BTN_MASK | UP_BTN_MASK, ESP_EXT1_WAKEUP_ANY_HIGH);
    esp_light_sleep_start();
}

void loop() {
    uint64_t wakeup_pin = esp_sleep_get_ext1_wakeup_status();
    if (esp_sleep_get_wakeup_cause() == ESP_SLEEP_WAKEUP_EXT1) {
        if (wakeup_pin & UP_BTN_MASK) {
            //display.fillRect(87, 0, 112, 112, GxEPD_WHITE);
            state.front_pokemon = Pokemon(((uint8_t) state.front_pokemon + 1) % (151));
            state.back_pokemon = Pokemon(((uint8_t) state.back_pokemon + 1) % (151));
            display.fillScreen(GxEPD_BLACK);
            display.display(true);
            display.fillScreen(GxEPD_WHITE);
            display.drawBackSprite(state.back_pokemon);
            display.drawFrontSprite(state.front_pokemon, state.is_japanese);
            display.drawFullScreen(Sprites::battle);
            display.display(true);

            Serial.println("UP Button pressed");
        }
        if (wakeup_pin & DOWN_BTN_MASK) {
            state.front_pokemon = Pokemon(((uint8_t) state.front_pokemon - 1) % (151));
            state.back_pokemon = Pokemon(((uint8_t) state.back_pokemon - 1) % (151));
            display.fillScreen(GxEPD_BLACK);
            display.display(true);
            display.fillScreen(GxEPD_WHITE);
            display.drawBackSprite(state.back_pokemon);
            display.drawFrontSprite(state.front_pokemon, state.is_japanese);
            display.drawFullScreen(Sprites::battle);
            display.display(true);
            Serial.println("DOWN Button pressed");
        }
        if (wakeup_pin & MENU_BTN_MASK) {
            state.is_japanese = !state.is_japanese;
            display.fillScreen(GxEPD_BLACK);
            display.display(true);
            display.fillScreen(GxEPD_WHITE);
            display.drawBackSprite(state.back_pokemon);
            display.drawFrontSprite(state.front_pokemon, state.is_japanese);
            display.drawFullScreen(Sprites::battle);
            display.display(true);
            Serial.println("MENU Button pressed");
        }
        if (wakeup_pin & BACK_BTN_MASK) {
            Serial.println("BACK Button pressed");
        }
    }
    Serial.flush();
    // esp_sleep_disable_wakeup_source(ESP_SLEEP_WAKEUP_ALL);
    // esp_sleep_enable_ext1_wakeup(BTN_PIN_MASK, ESP_EXT1_WAKEUP_ANY_HIGH);
    display.powerOff();
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