#ifndef YOUTUBE_BTN_H
#define YOUTUBE_BTN_H

#if defined(__AVR__)
    #include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
    #define PROGMEM
#elif defined(__arm__)
    #define PROGMEM
#endif

#define BMAP24_UTUBE_W 10
#define BMAP24_UTUBE_H 8

const uint32_t bitmap24_utube[BMAP24_UTUBE_W*BMAP24_UTUBE_H] PROGMEM={
    0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,   // (10) pixels
    0x000000, 0x000000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0x000000, 0x000000,   // (20) pixels
    0x000000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFFFFFF, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0x000000,   // (30) pixels
    0x000000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFFFFFF, 0xFFFFFF, 0xFF0000, 0xFF0000, 0xFF0000, 0x000000,   // (40) pixels
    0x000000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFFFFFF, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0x000000,   // (50) pixels
    0x000000, 0x000000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0xFF0000, 0x000000, 0x000000,   // (60) pixels
    0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,   // (70) pixels
    0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000, 0x000000,   // (80) pixels
};

#endif // YOUTUBE_BTN_H