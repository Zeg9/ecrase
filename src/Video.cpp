#include <cstdlib>
#include <iostream>
#include <string>
#include <fstream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
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

void Video::intro()
{
     Video ivd;
     int n=0;
     SDL_Surface* intro;
     std::string image[10];
     std::ifstream file;
     file.open("../script/intro.txt");
     while(!file.eof())
     {
         getline(file,image[n]);
         std::cout<<image[n]<<std::endl;
         intro = ivd.loadImg(("../data/"+image[n]));
         ivd.onScreen(intro, 0, 0);
         ivd.renderIt();
         SDL_Delay(5000);
         n++;
     }
     file.close();     
     SDL_FreeSurface(intro);
}

SDL_Surface* Video::loadImg(std::string filename)
{
    std::cout<<"Loading file: "<<filename<<std::endl;
    SDL_Surface* loadedImage = NULL;
    SDL_Surface* optimizedImage = NULL;
    loadedImage = IMG_Load(filename.c_str()); 
    if(loadedImage != NULL) 
    {
        optimizedImage = SDL_DisplayFormat(loadedImage);
        SDL_FreeSurface(loadedImage); 
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


