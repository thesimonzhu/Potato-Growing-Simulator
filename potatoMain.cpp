#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"

int main(int argc, char *argv[]) {

    bool running = true;
    bool menu = true;
    //initialize Allegro
    initializeAllegro();


    //declare and initialize display and font, and check they have been setup properly
    ALLEGRO_DISPLAY *display = al_create_display(SCREEN_W, SCREEN_H);
    ALLEGRO_FONT *font = al_load_ttf_font("quantico.regular.ttf", 100, 50);
    ALLEGRO_EVENT_QUEUE *event_queue= al_create_event_queue();
    ALLEGRO_TIMER *timer =al_create_timer(2.0)
    al_install_keyboard();

	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_register_event_source(queue, al_get_timer_event_source(timer));




    checkSetup(display, font);

    //set window title
	al_set_window_title(display, "The Martian: Potato Growing Simulator");


    al_start_timer(timer);

	while (running) {
        al_clear_to_color(BACKGROUND);

        printTitle(font);

        al_flip_display();

		ALLEGRO_EVENT event;

		al_wait_for_event(event_queue, &event);


        if (event.type == ALLEGRO_EVENT_TIMER) {
			printBars();

        }


		if (event.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
			running = false;

        }
        do
            {
            ALLEGRO_EVENT event;
            al_wait_for_event(queue, &event);

            if (event.type == ALLEGRO_EVENT_TIMER){
                 int oxygen (oxl, ALLEGRO_EVENT_QUEUE *event_queue);
                 int printHealthBars ();
            }

    // Free up memory taken by display.
    al_destroy_display(display);
    al_uninstall_keyboard();

    return 0;





}




