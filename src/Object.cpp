#include <iostream>
#include <string>
#include <fstream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Object.h"
#include "Video.h"

void Object::loadObject(std::string filename, int x, int y)//Loads like loadRoom();
{
    /* TODO: Implement this properly!
    int n = 0;
    Video &d = getVideo();
    std::string data[30];//Output from file
    std::string name[30];//Name of object
    std::string value[30];//Value of object
    std::ifstream file;//Filestream
    file.open(("../script/objects/"+filename).c_str());
    while(!file.eof())
    {
        getline(file, data[n]);//Read line from file
        int strpos = data[n].find("=");//Split data at "="
        name[n] = data[n].substr(0, strpos);//Cut name
        value[n] = data[n].substr(strpos+1,30);//Cut value
        //Different types of values:
        if(name[n]=="image")
        {
            Room::bgd = d.loadImg("../data/objects/"+value[n]);
        }
        else if(name[n]=="inv")
        {
            Room::fgd = d.loadImg("../data/objects/"+value[n]);
        }
        else if(name[n]=="inventory")
        {
            Room::fgd = d.loadImg("../data/rooms/"+value[n]);
        }
        //These were all types
        std::cout<<"Line "<<n<<": "<<data[n]<<std::endl;
        n++;
    }
    file.close();
    */
}

void Object::leftclickObject(int x, int y)
{
    std::cout<<"Leftclick at ("<<x<<","<<y<<")."<<std::endl;
}

void Object::rightclickObject(int x, int y)
{
    std::cout<<"Rightclick at ("<<x<<","<<y<<")."<<std::endl;
}

