#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>
#ifndef __ROOM_H__
#define __ROOM_H__

class Room
{
public:
    Room();
    ~Room();
    static void loadRoom(std::string filename);
};

#endif //__ROOM_H__
