#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include "Video.h"
#include "Room.h"

using namespace std;

int main(int argc, char *argv[])
{
    bool running = false;
    Video d;
    d.init();
    d.intro();
    while(running==true)
    {
        //Room::loadRoom("le.txt");
        d.renderIt();
        SDL_Delay(5000);
    }
    SDL_Quit();
    return 0;
}
