#include "snake.h"

void Snake::changeDir(char dir)
{
    this->direction = dir;
}

void Snake::moveSnake()
{
    switch (direction)
    {
        case 'u':
            pos.Y -= vel;
            break;        
        case 'd':
            pos.Y += vel;
            break;    
        case 'l':
            pos.X -= vel;
            break;    
        case 'r':
            pos.X += vel;
            break;
        
        default:
            break;
    }
    body.push_back(pos);
    if(body.size() > len)
        body.erase(body.begin());
}