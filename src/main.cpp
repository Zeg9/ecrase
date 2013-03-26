#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Video.h"
#include "Room.h"

using namespace std;

int main(int argc, char *argv[])
{
    Video d;
    d.init();
    d.intro();
    //Room::loadRoom("le.txt");
    d.renderIt();
    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}
