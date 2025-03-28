#ifndef FOOD_H
#define FOOD_H

#include <windows.h>
#include <cstdlib>

class Food
{
    private:
        COORD pos;

    public:
        Food() { genFood(); };
        void genFood()
        {
            pos.X = rand() % (WIDTH -3) + 1;
            pos.Y = rand() % (HEIGHT -3) + 1;
        };

        COORD getPos() {return pos;};
};

#endif