#ifndef TITLE_H 
#define TITLE_H
#include <gb/gb.h>

#define ALPHA_START 100U

extern UBYTE title_tiles[];
extern UBYTE title_screens[];

void show_title();
void show_game_over();
void show_win_screen();
#endif