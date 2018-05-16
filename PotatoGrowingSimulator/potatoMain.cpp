#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"

int main(int argc, char *argv[]) {
    //initialize Allegro
    initializeAllegro();

    //declare and initialize display and font, and check they have been setup properly
    ALLEGRO_DISPLAY *display = al_create_display(SCREEN_W, SCREEN_H);
    ALLEGRO_FONT *font = al_load_ttf_font("quantico.regular.ttf", 75, 50);
    checkSetup(display, font);

    //set window title
	al_set_window_title(display, "The Martian: Potato Growing Simulator");

    al_clear_to_color(BACKGROUND);

    printTitle(font);

	al_flip_display();

    //wait for 20 seconds.
    al_rest(10.0);

    // Free up memory taken by display.
    al_destroy_display(display);

    return 0;





}
