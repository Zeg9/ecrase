/*
Copyright (c) 2013 jmf, Zeg9

This software is provided 'as-is', without any express or implied warranty. 
In no event will the authors be held liable for any damages arising from the use of this software.

Permission is granted to anyone to use this software for any purpose, including commercial applications, 
and to alter it and redistribute it freely, subject to the following restrictions:

    1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. 
    If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.

    2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.

    3. This notice may not be removed or altered from any source distribution.
*/
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

