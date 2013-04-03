#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Video.h"
#include "Room.h"
#include "Layers.h"
#include "Event.h"

int main(int argc, char *argv[])
{
    Video &d = getVideo();
    int oldticks = 0;
    int fps;//Frames per second
    int test;
    Room::loadRoom("room.txt");
    while(true)
    {
        Event::gameEvent();
        Layers::drawLayers();
        d.renderIt();
        fps = 1000/(SDL_GetTicks()-oldticks);
        //std::cout<<fps<<std::endl;
        oldticks = SDL_GetTicks();
        SDL_Delay(17);
    }
}
