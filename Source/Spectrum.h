#pragma once

#define ESCAPE_SEQUENCE "\x1b"
#define getTermColor(ansiCode) ESCAPE_SEQUENCE ## "[" ## ansiCode ## "m"
#define getTermModeColor(ansiMode, ansiCode) ESCAPE_SEQUENCE ## "[" ## ansiMode ## ";" ## ansiCode ## "m"

typedef enum ANSIColors
{
    FRG_BLACK = 30,
    FRG_RED,
    FRG_GREEN,
    FRG_YELLOW,
    FRG_BLUE,
    FRG_PURPLE,
    FRG_CYAN,
    FRG_WHITE,

    BKG_BLACK = 40,
    BKG_RED,
    BKG_GREEN,
    BKG_YELLOW,
    BKG_BLUE,
    BKG_PURPLE,
    BKG_CYAN,
    BKG_WHITE,

    HGI_BLACK = 90,
    HGI_RED,
    HGI_GREEN,
    HGI_YELLOW,
    HGI_BLUE,
    HGI_PURPLE,
    HGI_CYAN,
    HGI_WHITE

    /* HIB_BLACK = 40,
    HIB_RED,
    HIB_GREEN,
    HIB_YELLOW,
    HIB_BLUE,
    HIB_PURPLE,
    HIB_CYAN,
    HIB_WHITE, */

}ANSIColor;

typedef enum ANSITXTMode
{
    REGULAR = 0,
    BOLD,
    UNDERLINE = 4
}TXTMode;

#ifndef TARGET_SYSTEM
    #ifdef _WIN32
    //TODO: set teminal to read ANSI escape sequnces 
    #elif __unix__
    #elif __APPLE__
    #endif
#endif

#define TARGET_CONSOLE