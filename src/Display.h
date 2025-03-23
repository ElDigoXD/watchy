#pragma once

#include "GxEPD2_BW.h"
#include "pokemons.h"
#include "../lib/watchy_display/WatchyDisplay.h"

class Display : public GxEPD2_BW<WatchyDisplay, WatchyDisplay::HEIGHT> {
public:
    Display() : GxEPD2_BW<WatchyDisplay, WatchyDisplay::HEIGHT>(WatchyDisplay()) {
    }

    void drawFrontSprite(Pokemon pokemon, int16_t x, int16_t y) {
        drawBitmap(x, y, getFrontSpriteByName(pokemon), 112, 112, GxEPD_BLACK);
    }

    void drawBackSprite(Pokemon pokemon, int16_t x, int16_t y) {
        drawBitmap(x, y, getBackSpriteByName(pokemon), 96, 84, GxEPD_BLACK);
    }

    void drawFullScreen(const uint8_t bitmap[]) {
        drawBitmap(0, 0, bitmap, Display::WIDTH, Display::HEIGHT, GxEPD_BLACK);
    }
};