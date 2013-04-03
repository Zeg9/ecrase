#ifndef __ROOM_H__
#define __ROOM_H__
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class Room
{
public:
    Room();
    ~Room();
    static void loadRoom(std::string filename);
    static SDL_Surface *bgd;
    static SDL_Surface *fgd;
    
private:
    std::string objects[30];
};

#endif //__ROOM_H__
