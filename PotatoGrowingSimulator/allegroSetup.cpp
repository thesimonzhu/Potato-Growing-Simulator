#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>                       // For allegro, must be in compiler search path.
#include <allegro5/allegro_native_dialog.h>
#include "potatoes.h"



void initializeAllegro(){

    // Initialize Allegro
	al_init();

	//initialize font addons
	al_init_font_addon();
    al_init_ttf_addon();

    printf("Allegro initialized successfully");

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

   return 0;
}

void printTitle(ALLEGRO_FONT *font){

    char title[200] = "TEST";

    //print Monarch title
    al_draw_text(font, FOREGROUND, COL_1, 5, ALLEGRO_ALIGN_LEFT, title);

    strcpy(title, "Birth Date");
    //print Monarch title
    al_draw_text(font, FOREGROUND, COL_2, 5, ALLEGRO_ALIGN_LEFT, title);

    strcpy(title, "Death Date");
    //print Monarch title
    al_draw_text(font, FOREGROUND, COL_3, 5, ALLEGRO_ALIGN_LEFT, title);

}

