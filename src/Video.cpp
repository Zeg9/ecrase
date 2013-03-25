#include <SDL/SDL.h>
#include <cstdlib>
#include <iostream>
#include <SDL/SDL_Image.h>
#include <string>
#include "Video.h"

SDL_Surface *Video::screen(0);

Video::Video()
{
}

Video::~Video()
{
    SDL_FreeSurface(screen);            
}

void Video::init()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    Video::screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
    SDL_WM_SetCaption( "ECRASE", NULL );
}

SDL_Surface* Video::loadImg(std::string filename)
{
    std::cout<<"Loading file: "<<filename<<std::endl;
    SDL_Surface* loadedImage = NULL;
    SDL_Surface* optimizedImage = NULL;
    loadedImage = IMG_Load( filename.c_str() ); 
    if( loadedImage != NULL ) 
    {
        optimizedImage = SDL_DisplayFormat( loadedImage );
        SDL_FreeSurface( loadedImage ); 
    } 
    return optimizedImage;
}
void Video::onScreen(SDL_Surface* imageToShow, int x, int y)
{
     SDL_Rect offset;
     offset.x = x; 
     offset.y = y; 
     SDL_BlitSurface( imageToShow, NULL, Video::screen, &offset );
}
void Video::renderIt()
{
    SDL_Flip(Video::screen);
}


