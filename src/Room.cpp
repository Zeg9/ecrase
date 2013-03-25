#include <SDL/SDL.h>
#include <cstdlib>
#include <iostream>
#include <SDL/SDL_Image.h>
#include <fstream>
#include <string>
#include "Room.h"
#include "Video.h"

Room::Room()
{          
}

Room::~Room()
{
}

void Room::loadRoom(std::string filename)
{
     Video rvd;
     std::string header;
     std::fstream file;
     file.open(filename.c_str());
     getline(file,header);
     std::cout<<header<<std::endl;
     std::string picname = "start.png";
     SDL_Surface* room;
     room = rvd.loadImg(picname);
     rvd.onScreen(room, 0, 0);
     file.close();
}
