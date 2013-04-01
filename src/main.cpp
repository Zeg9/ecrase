#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include "Video.h"
#include "Room.h"

using namespace std;

int main(int argc, char *argv[])
{
    bool running = true;
    Video &d = getVideo();
    d.init();
    d.intro();
    if(running==true)
    {
        Room::loadRoom("living_room.txt");
        d.renderIt();
        SDL_Delay(5000);
    }
    SDL_Quit();
    SDL_FreeSurface(Video::screen);  
    return 0;
}
