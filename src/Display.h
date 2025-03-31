#pragma once

#include "GxEPD2_BW.h"
#include "pokemons.h"
#include "../lib/watchy_display/WatchyDisplay.h"

class Display : public GxEPD2_BW<WatchyDisplay, WatchyDisplay::HEIGHT> {
public:
    Display() : GxEPD2_BW<WatchyDisplay, WatchyDisplay::HEIGHT>(WatchyDisplay()) {
    }

    void drawFrontSprite(Pokemon pokemon, bool is_japanese) {
        drawBitmap(87, 0, getFrontSpriteByName(pokemon, is_japanese), 112, 112, GxEPD_BLACK, GxEPD_WHITE);
    }

    void drawBackSprite(Pokemon pokemon) {
        drawBitmap(0, 64, getBackSpriteByName(pokemon), 96, 84, GxEPD_BLACK, GxEPD_WHITE);
    }

    void drawFullScreen(const uint8_t bitmap[]) {
        drawBitmap(0, 0, bitmap, Display::WIDTH, Display::HEIGHT, GxEPD_BLACK);
    }
};