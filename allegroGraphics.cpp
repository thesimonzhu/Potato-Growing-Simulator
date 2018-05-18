#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"

void loadMenu(ALLEGRO_FONT *font){

    char title[50] = "THE MARTIAN:";
    char title2[50] = "Potato Growing Simulator";


    al_draw_text(font, FOREGROUND, 640, 5, ALLEGRO_ALIGN_CENTER, title);
    al_draw_text(font, FOREGROUND, 640, 100, ALLEGRO_ALIGN_CENTER, title2);


}




