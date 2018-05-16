#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"

void printTitle(ALLEGRO_FONT *font){

    char title[5] = "TEST";

    //print Monarch title
    al_draw_text(font, FOREGROUND, COL_1, 5, ALLEGRO_ALIGN_CENTER, title);


}


