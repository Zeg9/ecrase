#include <SDL/SDL.h>
#include <cstdlib>
#include <iostream>
#include <SDL/SDL_image.h>
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
{/*
     Video rvd;
     int n=0;
     SDL_Surface* room;
     std::string header[10];
     std::ifstream file;
     file.open(("../data/rooms"+filename).c_str());
     while(!file.eof())
     {
         getline(file,header[n]);
         std::cout<<header[n]<<std::endl;
         room = rvd.loadImg(("../data/"+header[n]));
         rvd.onScreen(room, 0, 0);
         rvd.renderIt();
         SDL_Delay(3000);
         n++;
     }
     n=0;
     file.close(); */ 
}
