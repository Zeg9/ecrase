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
    static void loadObject(std::string filename);
    static void leftclickObject(int x, int y);
    static void rightclickObject(int x, int y);
};






#endif //__OBJECT_H__
