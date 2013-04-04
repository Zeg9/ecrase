#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Video.h"
#include "Room.h"

SDL_Surface *Room::bgd;//Background image
SDL_Surface *Room::fgd;//Foreground image
std::string objects[30];//Stores all objects

Room::Room()
{
}

Room::~Room()
{
}

void Room::loadRoom(std::string filename)
{
    int n = 0;
    int x = 0;
    int y = 0;
    Video &d = getVideo();
    std::string data[30];//Output from file
    std::string name[30];//Name of object
    std::string value[30];//Value of object
    std::string objx;//Object - x position
    std::string objy;//Object - y position
    std::ifstream file;//Filestream
    file.open(("../script/rooms/"+filename).c_str());
    while(!file.eof())
    {
        getline(file, data[n]);//Read line from file
        int strpos = data[n].find("=");//Split data at "="
        name[n] = data[n].substr(0, strpos);//Cut name
        value[n] = data[n].substr(strpos+1,30);//Cut value
        //Different types of values:
        if(name[n]=="bgd")
        {
            Room::bgd = d.loadImg("../data/rooms/"+value[n]);
        }
        else if(name[n]=="fgd")
        {
            Room::fgd = d.loadImg("../data/rooms/"+value[n]);
        }
        else if(name[n]=="obj")
        {
             getline(file, objx);//Read line from file
             std::istringstream xtoint(objx);
             xtoint >> x;
             getline(file, objy);//Read line from file
             std::istringstream ytoint(objy);
             ytoint >> y;
             std::cout<<"Loading object "<<data[n]<<" at ("<<x<<","<<y<<")..."<<std::endl;
        }
        //These were all types
        n++;
    }
    file.close();
}
