const int SCREEN_W = 1280;
const int SCREEN_H = 800;

const int COL_1 = 5;    //tabs for chart layout
const int COL_2 = 180;
const int COL_3 = 400;


#define BACKGROUND al_map_rgb(0xff, 0xff, 0xff)
#define FOREGROUND al_map_rgb(0x3C, 0x64, 0x78)

struct Vitals {
    int Oxygen;
    int Water;
    int Fertilizer;
    int Health;
    int Dust;
    int Hydrogen;

};


void initializeAllegro();
int checkSetup(ALLEGRO_DISPLAY *display, ALLEGRO_FONT *font);
void printTitle(ALLEGRO_FONT *font);

