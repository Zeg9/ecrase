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
#ifndef __OBJECT_H__
#define __OBJECT_H__
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>

class Object
{
public:
    Object();
    ~Object();
    void loadObject(std::string filename, int x, int y);
    void leftclickObject(int x, int y);
    void rightclickObject(int x, int y);
    void imageObject();
private:
    std::string objname;
    SDL_Surface *objimage;
    SDL_Surface *inv;
    SDL_Rect objsurf; 
    int objx;
    int objy;
};

Object &getObject(int n);

#endif //__OBJECT_H__
