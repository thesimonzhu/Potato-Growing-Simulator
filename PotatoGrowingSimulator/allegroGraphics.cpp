#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"

void loadMenu(){

    al_clear_to_color(BACKGROUND);
    ALLEGRO_BITMAP *buffer = al_create_bitmap(1280, 800);
    ALLEGRO_BITMAP *menu1 = al_load_bitmap("menu1.jpg");
    ALLEGRO_BITMAP *menu2 = al_load_bitmap("menu2.jpg");
    ALLEGRO_BITMAP *menu3 = al_load_bitmap("menu3.jpg");
    ALLEGRO_BITMAP *menu4 = al_load_bitmap("menu4.jpg");

    al_draw_bitmap(menu1, 0,0,0);



}




