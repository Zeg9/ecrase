#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>
#ifndef __PLAYER_H__
#define __PLAYER_H__

class Player
{
public:
    Player();
    ~Player();
    static void setCostume(std::string filename);
    static SDL_Surface* player;
};

#endif //__PLAYER_H__
