//This function prints the health bars whenever it is called from the main function
#include <allegro5/allegro.h>
#include potatoes.h
#define GREEN   al_map_rgb(60, 180, 75)

    //allow program do draw shapes


	void printHealthBars(ALLEGRO_DISPLAY *display, int oxl, int hydrogen, int health, int water, int dust){
	al_draw_filled_rectangle(25, 300, 50, oxygen, GREEN);
	al_draw_filled_rectangle(55, 300, 80, hydrogen, GREEN);
	al_draw_filled_rectangle(85, 300, 110, health, GREEN);
	al_draw_filled_rectangle(115, 300, 140, water, GREEN);
    al_draw_filled_rectangle(145, 300, 170, dust, GREEN);

    al_flip_display();

	}
