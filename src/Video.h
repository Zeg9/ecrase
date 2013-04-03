#ifndef __VIDEO_H__
#define __VIDEO_H__
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>



class Video
{
public:
    Video();
    ~Video();
    static SDL_Surface* loadImg(std::string filename);
    static void Video::onScreen(SDL_Surface* imageToShow, int x, int y);
    static void Video::renderIt();
    static SDL_Surface* screen;
};

Video &getVideo();

#endif //__VIDEO_H__
