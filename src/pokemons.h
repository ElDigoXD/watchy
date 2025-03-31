#pragma once

#include "sprites/sprites.h"

enum class Pokemon : uint8_t {
    Bulbasaur = 0,
    Ivysaur,
    Venusaur,
    Charmander,
    Charmeleon,
    Charizard,
    Squirtle,
    Wartortle,
    Blastoise,
    Caterpie,
    Metapod,
    Butterfree,
    Weedle,
    Kakuna,
    Beedrill,
    Pidgey,
    Pidgeotto,
    Pidgeot,
    Rattata,
    Raticate,
    Spearow,
    Fearow,
    Ekans,
    Arbok,
    Pikachu,
    Raichu,
    Sandshrew,
    Sandslash,
    Nidorana,
    Nidorina,
    Nidoqueen,
    Nidorano,
    Nidorino,
    Nidoking,
    Clefairy,
    Clefable,
    Vulpix,
    Ninetales,
    Jigglypuff,
    Wigglytuff,
    Zubat,
    Golbat,
    Oddish,
    Gloom,
    Vileplume,
    Paras,
    Parasect,
    Venonat,
    Venomoth,
    Diglett,
    Dugtrio,
    Meowth,
    Persian,
    Psyduck,
    Golduck,
    Mankey,
    Primeape,
    Growlithe,
    Arcanine,
    Poliwag,
    Poliwhirl,
    Poliwrath,
    Abra,
    Kadabra,
    Alakazam,
    Machop,
    Machoke,
    Machamp,
    Bellsprout,
    Weepinbell,
    Victreebel,
    Tentacool,
    Tentacruel,
    Geodude,
    Graveler,
    Golem,
    Ponyta,
    Rapidash,
    Slowpoke,
    Slowbro,
    Magnemite,
    Magneton,
    Farfetchd,
    Doduo,
    Dodrio,
    Seel,
    Dewgong,
    Grimer,
    Muk,
    Shellder,
    Cloyster,
    Gastly,
    Haunter,
    Gengar,
    Onix,
    Drowzee,
    Hypno,
    Krabby,
    Kingler,
    Voltorb,
    Electrode,
    Exeggcute,
    Exeggutor,
    Cubone,
    Marowak,
    Hitmonlee,
    Hitmonchan,
    Lickitung,
    Koffing,
    Weezing,
    Rhyhorn,
    Rhydon,
    Chansey,
    Tangela,
    Kangaskhan,
    Horsea,
    Seadra,
    Goldeen,
    Seaking,
    Staryu,
    Starmie,
    MrMime,
    Scyther,
    Jynx,
    Electabuzz,
    Magmar,
    Pinsir,
    Tauros,
    Magikarp,
    Gyarados,
    Lapras,
    Ditto,
    Eevee,
    Vaporeon,
    Jolteon,
    Flareon,
    Porygon,
    Omanyte,
    Omastar,
    Kabuto,
    Kabutops,
    Aerodactyl,
    Snorlax,
    Articuno,
    Zapdos,
    Moltres,
    Dratini,
    Dragonair,
    Dragonite,
    Mewtwo,
    Mew
};

const unsigned char *names[151] = {
        reinterpret_cast<const unsigned char *>("Bulbasaur"),
        reinterpret_cast<const unsigned char *>("Ivysaur"),
        reinterpret_cast<const unsigned char *>("Venusaur"),
        reinterpret_cast<const unsigned char *>("Charmander"),
        reinterpret_cast<const unsigned char *>("Charmeleon"),
        reinterpret_cast<const unsigned char *>("Charizard"),
        reinterpret_cast<const unsigned char *>("Squirtle"),
        reinterpret_cast<const unsigned char *>("Wartortle"),
        reinterpret_cast<const unsigned char *>("Blastoise"),
        reinterpret_cast<const unsigned char *>("Caterpie"),
        reinterpret_cast<const unsigned char *>("Metapod"),
        reinterpret_cast<const unsigned char *>("Butterfree"),
        reinterpret_cast<const unsigned char *>("Weedle"),
        reinterpret_cast<const unsigned char *>("Kakuna"),
        reinterpret_cast<const unsigned char *>("Beedrill"),
        reinterpret_cast<const unsigned char *>("Pidgey"),
        reinterpret_cast<const unsigned char *>("Pidgeotto"),
        reinterpret_cast<const unsigned char *>("Pidgeot"),
        reinterpret_cast<const unsigned char *>("Rattata"),
        reinterpret_cast<const unsigned char *>("Raticate"),
        reinterpret_cast<const unsigned char *>("Spearow"),
        reinterpret_cast<const unsigned char *>("Fearow"),
        reinterpret_cast<const unsigned char *>("Ekans"),
        reinterpret_cast<const unsigned char *>("Arbok"),
        reinterpret_cast<const unsigned char *>("Pikachu"),
        reinterpret_cast<const unsigned char *>("Raichu"),
        reinterpret_cast<const unsigned char *>("Sandshrew"),
        reinterpret_cast<const unsigned char *>("Sandslash"),
        reinterpret_cast<const unsigned char *>("Nidorana"), // ♀
        reinterpret_cast<const unsigned char *>("Nidorina"),
        reinterpret_cast<const unsigned char *>("Nidoqueen"),
        reinterpret_cast<const unsigned char *>("Nidorano"), // ♂
        reinterpret_cast<const unsigned char *>("Nidorino"),
        reinterpret_cast<const unsigned char *>("Nidoking"),
        reinterpret_cast<const unsigned char *>("Clefairy"),
        reinterpret_cast<const unsigned char *>("Clefable"),
        reinterpret_cast<const unsigned char *>("Vulpix"),
        reinterpret_cast<const unsigned char *>("Ninetales"),
        reinterpret_cast<const unsigned char *>("Jigglypuff"),
        reinterpret_cast<const unsigned char *>("Wigglytuff"),
        reinterpret_cast<const unsigned char *>("Zubat"),
        reinterpret_cast<const unsigned char *>("Golbat"),
        reinterpret_cast<const unsigned char *>("Oddish"),
        reinterpret_cast<const unsigned char *>("Gloom"),
        reinterpret_cast<const unsigned char *>("Vileplume"),
        reinterpret_cast<const unsigned char *>("Paras"),
        reinterpret_cast<const unsigned char *>("Parasect"),
        reinterpret_cast<const unsigned char *>("Venonat"),
        reinterpret_cast<const unsigned char *>("Venomoth"),
        reinterpret_cast<const unsigned char *>("Diglett"),
        reinterpret_cast<const unsigned char *>("Dugtrio"),
        reinterpret_cast<const unsigned char *>("Meowth"),
        reinterpret_cast<const unsigned char *>("Persian"),
        reinterpret_cast<const unsigned char *>("Psyduck"),
        reinterpret_cast<const unsigned char *>("Golduck"),
        reinterpret_cast<const unsigned char *>("Mankey"),
        reinterpret_cast<const unsigned char *>("Primeape"),
        reinterpret_cast<const unsigned char *>("Growlithe"),
        reinterpret_cast<const unsigned char *>("Arcanine"),
        reinterpret_cast<const unsigned char *>("Poliwag"),
        reinterpret_cast<const unsigned char *>("Poliwhirl"),
        reinterpret_cast<const unsigned char *>("Poliwrath"),
        reinterpret_cast<const unsigned char *>("Abra"),
        reinterpret_cast<const unsigned char *>("Kadabra"),
        reinterpret_cast<const unsigned char *>("Alakazam"),
        reinterpret_cast<const unsigned char *>("Machop"),
        reinterpret_cast<const unsigned char *>("Machoke"),
        reinterpret_cast<const unsigned char *>("Machamp"),
        reinterpret_cast<const unsigned char *>("Bellsprout"),
        reinterpret_cast<const unsigned char *>("Weepinbell"),
        reinterpret_cast<const unsigned char *>("Victreebel"),
        reinterpret_cast<const unsigned char *>("Tentacool"),
        reinterpret_cast<const unsigned char *>("Tentacruel"),
        reinterpret_cast<const unsigned char *>("Geodude"),
        reinterpret_cast<const unsigned char *>("Graveler"),
        reinterpret_cast<const unsigned char *>("Golem"),
        reinterpret_cast<const unsigned char *>("Ponyta"),
        reinterpret_cast<const unsigned char *>("Rapidash"),
        reinterpret_cast<const unsigned char *>("Slowpoke"),
        reinterpret_cast<const unsigned char *>("Slowbro"),
        reinterpret_cast<const unsigned char *>("Magnemite"),
        reinterpret_cast<const unsigned char *>("Magneton"),
        reinterpret_cast<const unsigned char *>("Farfetch'd"),
        reinterpret_cast<const unsigned char *>("Doduo"),
        reinterpret_cast<const unsigned char *>("Dodrio"),
        reinterpret_cast<const unsigned char *>("Seel"),
        reinterpret_cast<const unsigned char *>("Dewgong"),
        reinterpret_cast<const unsigned char *>("Grimer"),
        reinterpret_cast<const unsigned char *>("Muk"),
        reinterpret_cast<const unsigned char *>("Shellder"),
        reinterpret_cast<const unsigned char *>("Cloyster"),
        reinterpret_cast<const unsigned char *>("Gastly"),
        reinterpret_cast<const unsigned char *>("Haunter"),
        reinterpret_cast<const unsigned char *>("Gengar"),
        reinterpret_cast<const unsigned char *>("Onix"),
        reinterpret_cast<const unsigned char *>("Drowzee"),
        reinterpret_cast<const unsigned char *>("Hypno"),
        reinterpret_cast<const unsigned char *>("Krabby"),
        reinterpret_cast<const unsigned char *>("Kingler"),
        reinterpret_cast<const unsigned char *>("Voltorb"),
        reinterpret_cast<const unsigned char *>("Electrode"),
        reinterpret_cast<const unsigned char *>("Exeggcute"),
        reinterpret_cast<const unsigned char *>("Exeggutor"),
        reinterpret_cast<const unsigned char *>("Cubone"),
        reinterpret_cast<const unsigned char *>("Marowak"),
        reinterpret_cast<const unsigned char *>("Hitmonlee"),
        reinterpret_cast<const unsigned char *>("Hitmonchan"),
        reinterpret_cast<const unsigned char *>("Lickitung"),
        reinterpret_cast<const unsigned char *>("Koffing"),
        reinterpret_cast<const unsigned char *>("Weezing"),
        reinterpret_cast<const unsigned char *>("Rhyhorn"),
        reinterpret_cast<const unsigned char *>("Rhydon"),
        reinterpret_cast<const unsigned char *>("Chansey"),
        reinterpret_cast<const unsigned char *>("Tangela"),
        reinterpret_cast<const unsigned char *>("Kangaskhan"),
        reinterpret_cast<const unsigned char *>("Horsea"),
        reinterpret_cast<const unsigned char *>("Seadra"),
        reinterpret_cast<const unsigned char *>("Goldeen"),
        reinterpret_cast<const unsigned char *>("Seaking"),
        reinterpret_cast<const unsigned char *>("Staryu"),
        reinterpret_cast<const unsigned char *>("Starmie"),
        reinterpret_cast<const unsigned char *>("Mr. Mime"),
        reinterpret_cast<const unsigned char *>("Scyther"),
        reinterpret_cast<const unsigned char *>("Jynx"),
        reinterpret_cast<const unsigned char *>("Electabuzz"),
        reinterpret_cast<const unsigned char *>("Magmar"),
        reinterpret_cast<const unsigned char *>("Pinsir"),
        reinterpret_cast<const unsigned char *>("Tauros"),
        reinterpret_cast<const unsigned char *>("Magikarp"),
        reinterpret_cast<const unsigned char *>("Gyarados"),
        reinterpret_cast<const unsigned char *>("Lapras"),
        reinterpret_cast<const unsigned char *>("Ditto"),
        reinterpret_cast<const unsigned char *>("Eevee"),
        reinterpret_cast<const unsigned char *>("Vaporeon"),
        reinterpret_cast<const unsigned char *>("Jolteon"),
        reinterpret_cast<const unsigned char *>("Flareon"),
        reinterpret_cast<const unsigned char *>("Porygon"),
        reinterpret_cast<const unsigned char *>("Omanyte"),
        reinterpret_cast<const unsigned char *>("Omastar"),
        reinterpret_cast<const unsigned char *>("Kabuto"),
        reinterpret_cast<const unsigned char *>("Kabutops"),
        reinterpret_cast<const unsigned char *>("Aerodactyl"),
        reinterpret_cast<const unsigned char *>("Snorlax"),
        reinterpret_cast<const unsigned char *>("Articuno"),
        reinterpret_cast<const unsigned char *>("Zapdos"),
        reinterpret_cast<const unsigned char *>("Moltres"),
        reinterpret_cast<const unsigned char *>("Dratini"),
        reinterpret_cast<const unsigned char *>("Dragonair"),
        reinterpret_cast<const unsigned char *>("Dragonite"),
        reinterpret_cast<const unsigned char *>("Mewtwo"),
        reinterpret_cast<const unsigned char *>("Mew")
};
static unsigned char front_sprite[112 * 112 / 8];
static unsigned char back_sprite[96 * 84 / 8];

const unsigned char *
scale_nearest_x2_and_dither(const unsigned char *img, int width, int height, unsigned char *out_buffer);

const unsigned char *getFrontSpriteByName(Pokemon pokemon, bool is_japanese) {
    scale_nearest_x2_and_dither(
            &Sprites::pokemon_front_spritesheet[ // Todo: refactor math
                    (static_cast<uint8_t>(pokemon) * 56 * 56 * 2 * 2 + !is_japanese * 56 * 56 * 2) / 8], 56,
            56, front_sprite);
    return front_sprite;
    return &Sprites::pokemon_front_spritesheet[static_cast<uint8_t>(pokemon) * (112 * 112 / 8 * 2)];
}

const unsigned char *getBackSpriteByName(Pokemon pokemon) {
    return &Sprites::pokemon_back_spritesheet[static_cast<uint8_t>(pokemon) * (96 * 84 / 8)];
}

// Todo: clear and generalize
const unsigned char *
scale_nearest_x2_and_dither(const unsigned char *img, int width, int height, unsigned char *out_buffer) {
    auto *tmp = static_cast<unsigned char *>(malloc(width * height * 4));
    auto tmp_counter = 0;
    auto line = 0;
    for (int i = 0; i < width * height / 8 * 2; i++) {
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 6) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 6) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 4) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 4) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 2) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 2) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 0) & 0b11;
        tmp[tmp_counter++ + line * width * 2] = (img[i] >> 0) & 0b11;
        if (tmp_counter >= width * 2) {
            memcpy(&tmp[(line + 1) * width * 2], &tmp[line * width * 2], width * 2);
            line += 2;
            tmp_counter = 0;
        }
    }

    // Dithering
    for (int x = 0; x < width * 2; x++) {
        for (int y = 0; y < height * 2; y++) {
            int idx = x + y * width * 2;
            auto pixel = tmp[idx];
            if (pixel == 1 || pixel == 2) {
                int mod_x = x % 4;
                int mod_y = y % 4;
                if (mod_x == 3) tmp[idx] = 0;
                else if (mod_y == 3) tmp[idx] = 0;
                else if (mod_x == 0 || mod_x == 2) {
                    if (mod_y == 0) tmp[idx] = 3;
                    else if (mod_y == 1) tmp[idx] = 0;
                    else if (mod_y == 2) tmp[idx] = 3;
                } else if (mod_x == 1) {
                    if (mod_y == 0) tmp[idx] = 0;
                    else if (mod_y == 1) tmp[idx] = 3;
                    else if (mod_y == 2) tmp[idx] = 0;
                }
            }
            if (pixel == 2) {
                tmp[idx] = tmp[idx] == 3 ? 0 : 3;
            }
        }
    }

    memset(out_buffer, 0, width * height * 4 / 8);
    // Convert to 1-bit
    for (int x = 0; x < width * 2; x += 8) {   // 56x2 = 112 bytes | 56/8 = 7 bytes
        for (int y = 0; y < height * 2; y++) { // 56x2 = 112 * | 112 *
            auto out_buffer_idx = x / 8 + y * (width * 2 / 8);
            out_buffer[out_buffer_idx] |= (tmp[x + 0 + y * width * 2] & 0b1) << 7;
            out_buffer[out_buffer_idx] |= (tmp[x + 1 + y * width * 2] & 0b1) << 6;
            out_buffer[out_buffer_idx] |= (tmp[x + 2 + y * width * 2] & 0b1) << 5;
            out_buffer[out_buffer_idx] |= (tmp[x + 3 + y * width * 2] & 0b1) << 4;
            out_buffer[out_buffer_idx] |= (tmp[x + 4 + y * width * 2] & 0b1) << 3;
            out_buffer[out_buffer_idx] |= (tmp[x + 5 + y * width * 2] & 0b1) << 2;
            out_buffer[out_buffer_idx] |= (tmp[x + 6 + y * width * 2] & 0b1) << 1;
            out_buffer[out_buffer_idx] |= (tmp[x + 7 + y * width * 2] & 0b1) << 0;
        }
    }
    free(tmp);
    return out_buffer;
}

// def dither_by_hand_from_2bit(img: Image) -> Image:
//    if img.mode != "P":
//        raise ValueError("Image must be in 2-bit palette mode")
//
//    for x in range(img.width):
//        for y in range(img.height):
//            # Get the pixel value (0-3)
//            pixel = img.getpixel((x, y))
//
//            if pixel == 1 or pixel == 2:
//                mod_x = x % 4
//                mod_y = y % 4
//                if mod_x == 3: img.putpixel((x, y), 0)
//                elif mod_y == 3: img.putpixel((x, y), 0)
//                elif mod_x == 0 or mod_x == 2:
//                    if mod_y == 0: img.putpixel((x, y), 3)
//                    elif mod_y == 1: img.putpixel((x, y), 0)
//                    elif mod_y == 2: img.putpixel((x, y), 3)
//                elif mod_x == 1:
//                    if mod_y == 0: img.putpixel((x, y), 0)
//                    elif mod_y == 1: img.putpixel((x, y), 3)
//                    elif mod_y == 2: img.putpixel((x, y), 0)
//            if pixel == 2:
//                img.putpixel((x, y), 0 if img.getpixel((x, y)) == 3 else 3)
//
//    return img
const unsigned char *dither_by_hand_from_2bit(const unsigned char *img, int width, int height) {
    static unsigned char dithered[96 * 84 / 8];
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < height; y++) {
            // Get the pixel value (0-3)
            uint8_t pixel = img[(x + y * width) / 8] & (1 << (7 - (x + y * width) % 8));

            if (pixel == 1 || pixel == 2) {
                int mod_x = x % 4;
                int mod_y = y % 4;
                if (mod_x == 3) dithered[x + y * width] = 0;
                else if (mod_y == 3) dithered[x + y * width] = 0;
                else if (mod_x == 0 || mod_x == 2) {
                    if (mod_y == 0) dithered[x + y * width] = 3;
                    else if (mod_y == 1) dithered[x + y * width] = 0;
                    else if (mod_y == 2) dithered[x + y * width] = 3;
                } else if (mod_x == 1) {
                    if (mod_y == 0) dithered[x + y * width] = 0;
                    else if (mod_y == 1) dithered[x + y * width] = 3;
                    else if (mod_y == 2) dithered[x + y * width] = 0;
                }
            }
            if (pixel == 2) {
                dithered[x + y * width] = img[(x + y * width) / 8] & ~(1 << (7 - (x + y * width) % 8));
            }
        }
    }
    return dithered;
}