#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Event.h"
#include "Object.h"

Event::Event()
{
}

Event::~Event()
{
}

void Event::gameEvent()
{
    SDL_Event &event = getEvent();
    int x;
    int y;
    while(SDL_PollEvent(&event))
    {
        if(event.type==SDL_QUIT)
        {
        }
        
        if(event.type==SDL_MOUSEBUTTONDOWN)
        { 
            if( event.button.button == SDL_BUTTON_LEFT ) 
            {
                x = event.button.x; 
                y = event.button.y;
                std::cout<<"Leftclick at ("<<x<<","<<y<<")."<<std::endl;
                Object::leftclickObject(x, y);
            }
            else if( event.button.button == SDL_BUTTON_RIGHT ) 
            {
                x = event.button.x; 
                y = event.button.y;
                std::cout<<"Rightclick at ("<<x<<","<<y<<")."<<std::endl;
                Object::rightclickObject(x, y);
            }
        }
    }
}

SDL_Event &getEvent()
{
    static SDL_Event event;
    return event;
}
