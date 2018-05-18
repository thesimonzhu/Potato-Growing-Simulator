#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_native_dialog.h>
#include <allegro5/allegro_image.h>
#include "potatoes.h"



void initializeAllegro(){

    // Initialize Allegro
	al_init();

	//initialize font addons
	al_init_font_addon();
    al_init_ttf_addon();

    printf("Allegro initialized successfully\n");

}

int checkSetup(ALLEGRO_DISPLAY *display, ALLEGRO_FONT *font){

    // Check if your allegro routines worked successfully.
	if (!display) {
    	al_show_native_message_box(display, "Error", "Error", "Failed to initialize display!",
                                 nullptr, ALLEGRO_MESSAGEBOX_ERROR);
       	return -1;
	}


    if (!font){
        al_show_native_message_box(display, "Error", "Error", "Could not load Quantico.Regular.ttf",
                                    nullptr, ALLEGRO_MESSAGEBOX_ERROR);
      return -1;
   }

   if (!al_init_image_addon()) {
    	al_show_native_message_box(display, "Error", "Error",
    		"Failed to initialize image addon!", nullptr, ALLEGRO_MESSAGEBOX_ERROR);
    	return -1;
	}
	if (!al_install_keyboard()) {
	    al_show_native_message_box(display, "Error", "Error", "failed to initialize the keyboard!",
                                 nullptr, ALLEGRO_MESSAGEBOX_ERROR);
      	return -1;
   	}

    printf("Add-ons initialized successfully\n");

   return 0;
}

