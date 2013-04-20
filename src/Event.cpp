/*
Copyright (c) 2013 jmf, Zeg9

This software is provided 'as-is', without any express or implied warranty. 
In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, 
and to alter it and redistribute it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. 
    If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any source distribution.
*/
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Event.h"
#include "Object.h"

extern bool quit_engine;

Event::Event()
{
}

Event::~Event()
{
}

void Event::gameEvent()
{
    SDL_Event &event = getEvent();
    int x=0;
    int y=0;
    int n=0;
    while(SDL_PollEvent(&event))
    {
        if(event.type==SDL_QUIT)
        {
        	quit_engine = true;
        }
        
        if(event.type==SDL_MOUSEBUTTONDOWN)
        { 
            if( event.button.button == SDL_BUTTON_LEFT ) 
            {
                x = event.button.x; 
                y = event.button.y;
                while (n!=19)
                {
                    Object &obj = getObject(n);
                    obj.leftclickObject(x,y);
                    n++;
                }
                n=0;
            }
            else if( event.button.button == SDL_BUTTON_RIGHT ) 
            {
                x = event.button.x; 
                y = event.button.y;
                while (n!=19)
                {
                    Object &obj = getObject(n);
                    obj.rightclickObject(x,y);
                    n++;
                }
                n=0;
            }
        }
    }
}

SDL_Event &getEvent()
{
    static SDL_Event event;
    return event;
}
