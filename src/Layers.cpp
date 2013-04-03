#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Video.h"
#include "Layers.h"
#include "Room.h"

Layers::Layers()
{
}

Layers::~Layers()
{
}

void Layers::drawLayers()
{
     
     getVideo().onScreen(Room::bgd, 0, 0);//Draw the background
     //TODO: Objects and player here
     getVideo().onScreen(Room::fgd, 0, 0);//Draw the foreground
}

