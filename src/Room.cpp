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
     SDL_Surface* room;
     std::string value[10];
     std::string name[10];
     std::string header[10];
     std::ifstream file;
     file.open(("../script/rooms/"+filename).c_str());
     while(!file.eof())
     {
         getline(file,header[n]);
         int strpos = header[n].find("=");    
         name[n] = header[n].substr(0, strpos);
         value[n] = header[n].substr(strpos+1,10);
         std::cout<<header[n]<<std::endl;
         std::cout<<name[n]<<std::endl;
         std::cout<<":"<<value[n]<<":"<<std::endl;
         if(name[n]=="image")
         {
             //room = rvd.loadImg(("../data/"+value[n]));
             room = rvd.loadImg("../data/rooms/01.png");
             std::cout<<"Room is:"<<room<<std::endl;
             rvd.onScreen(room, 0, 0);
             rvd.renderIt();
             SDL_Delay(5000);
         }
         n++;
     }
     n=0;
     file.close();
}
