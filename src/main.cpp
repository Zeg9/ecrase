#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include "Video.h"
#include "Room.h"

using namespace std;

int main(int argc, char *argv[])
{
    Video d;
    d.init();
    Room::loadRoom("le.txt");
    d.renderIt();
    SDL_Delay(5000);
    SDL_Quit();
    return 0;
}
