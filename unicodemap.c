#include QMK_KEYBOARD_H

enum unicode_names { AE, AG, HG, CU, FE, SN, PB, UNS, NPN, PLT, ARIES, TAURUS, GEMINI, CANCER, LEO, VIRGO, LIBRA, SCORPIO, SAGITTARIUS, CAPRICORN, AQUARIUS, PISCES, CJT, STL, SQR, TRN, OPP, NND, SND, FIRE, EARTH, AIR, WATER };

const uint32_t PROGMEM unicode_map[] = {
    [AE] = 0x2609,  // ☉
    [AG] = 0x263D,  // ☽
    [HG] = 0x263F,  // ☿
    [CU] = 0x2640,  // ♀
    [FE] = 0x2642,  // ♂
    [SN] = 0x2643,  // ♃
    [PB] = 0x2644,  // ♄
    [UNS] = 0x2645, // ♅
    [NPN] = 0x2646, // ♆
    [PLT] = 0x2647, // ♇
    [ARIES] = 0x2648,       // ♈︎
    [TAURUS] = 0x2649,      // ♉︎
    [GEMINI] = 0x264A,      // ♊︎
    [CANCER] = 0x264B,      // ♋︎
    [LEO] = 0x264C,         // ♌︎
    [VIRGO] = 0x264D,       // ♍︎
    [LIBRA] = 0x264E,       // ♎︎
    [SCORPIO] = 0x264F,     // ♏︎
    [SAGITTARIUS] = 0x2650, // ♐︎
    [CAPRICORN] = 0x2651,   // ♑︎
    [AQUARIUS] = 0x2652,    // ♒︎
    [PISCES] = 0x2653,      // ♓︎
    [CJT] = 0x260C, // ☌
    [STL] = 0x26B9, // ⚹
    [SQR] = 0x25A1, // □
    [TRN] = 0x25B3, // △
    [OPP] = 0x260D, // ☍
    [NND] = 0x260A, // ☊
    [SND] = 0x260B, // ☋
    [FIRE] = 0x1F702,   // 🜂
    [EARTH] = 0x1F703,  // 🜃
    [AIR] = 0x1F701,    // 🜁
    [WATER] = 0x1F704   // 🜄
};
