#ifndef __OBJECT_H__
#define __OBJECT_H__
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class Object
{
public:
    Object();
    ~Object();
    static void loadObject(std::string filename, int x, int y);
    static void leftclickObject(int x, int y);
    static void rightclickObject(int x, int y);
    static SDL_Surface *image[20];
    static SDL_Surface *inv[20];
    static std::string object [20];
    static SDL_rect surface[20];
};






#endif //__OBJECT_H__
