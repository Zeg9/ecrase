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
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Video.h"

SDL_Surface *Video::screen = NULL;//Initializing the screen

Video::Video()
{
    SDL_Init(SDL_INIT_EVERYTHING);//Initializing everything
    Video::screen = SDL_SetVideoMode(640, 480, 32,SDL_SWSURFACE );//TODO: Make this configurable
    SDL_WM_SetCaption( "ECRASE", NULL );//Set Window caption   
}

Video::~Video()
{
}

SDL_Surface* Video::loadImg(std::string filename)//For optimizing purposes
{
    std::cout<<"Loading file: "<<filename<<std::endl;
    SDL_Surface* loadedImage = NULL;
    SDL_Surface* optimizedImage = NULL;
    loadedImage = IMG_Load(filename.c_str()); 
    if(loadedImage != NULL)
    {
        optimizedImage = SDL_DisplayFormatAlpha(loadedImage);
        SDL_FreeSurface(loadedImage); 
    } 
    return optimizedImage;
}

void Video::onScreen(SDL_Surface* imageToShow, int x, int y)//Bring the image into position
{
     SDL_Rect offset;//Position rectangle
     offset.x = x;
     offset.y = y;
     SDL_BlitSurface(imageToShow, NULL, Video::screen, &offset);//Blit image to screen
}

void Video::renderIt()
{
    SDL_Flip(Video::screen);
}

Video &getVideo()//One device to rule them all ;)
{
    static Video device;//Make a static video device
    return device;//Return it
}
