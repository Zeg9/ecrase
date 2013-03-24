#include <cstdlib>
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include "Video.h"

using namespace std;

int main(int argc, char *argv[])
{
    SDL_Surface* start;
    
    Video d;
    start = d.loadImg("start.png");
    d.onScreen(start, 0, 0);
    d.renderIt();
    SDL_Delay(5000);
    SDL_FreeSurface(start); 
    SDL_Quit();
    return 0;
}
