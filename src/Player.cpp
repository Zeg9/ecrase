#include <SDL/SDL.h>
#include <SDL/SDL_Image.h>
#include <string>
#include "Player.h"
#include "Video.h"

SDL_Surface *Player::player(0);

Player::Player()
{
}

Player::~Player()
{
    SDL_FreeSurface(Player::player);
}

void Player::setCostume(std::string filename)
{
    Video pvd;
    player = pvd.loadImg(("../data/player/"+filename).c_str());
}

