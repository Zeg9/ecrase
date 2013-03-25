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
     int n=0;
     std::string header[10];
     std::ifstream file;
     file.open(filename.c_str());
     while(!file.eof())
     {
         getline(file,header[n]);
         std::cout<<header[n]<<std::endl;
         n++;
     }
     n=0;
     SDL_Surface* room;
     room = rvd.loadImg(header[0]);
     rvd.onScreen(room, 0, 0);
     file.close();
}
