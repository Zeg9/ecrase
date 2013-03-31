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
    Video d;
    d.init();
    d.intro();
    if(running==true)
    {
        int n=0;
        SDL_Surface* test;
        test = d.loadImg(("../data/ecrase.png"));
        d.onScreen(test, 0, 0);
        d.renderIt();
        SDL_Delay(5000);
        SDL_FreeSurface(test);
    }
    SDL_Quit();
    SDL_FreeSurface(Video::screen);  
    return 0;
}
