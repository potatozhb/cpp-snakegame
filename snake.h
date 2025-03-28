#ifndef SNAKE_H
#define SNAKE_H

#include <windows.h>
#include <vector>

const int WIDTH = 50, HEIGHT = 25;

class Snake
{
    public:
        Snake(COORD pos, int vel)
        {
            this->pos = pos;
            this->vel = vel;
            len = 1;
            direction = 'n';
            body.push_back(pos);
        };

        void changeDir(char dir);
        void moveSnake();

        COORD getPos() { return pos; };
        int getLen() {return len;};
        std::vector<COORD> getBody() {return body;};

        bool eaten(COORD foodpos)
        {
            return foodpos.X == pos.X && foodpos.Y == pos.Y;
        };

        void grow()
        {
            this->len++;
        }

        bool collided() 
        {
            return pos.X < 1 || pos.X > WIDTH || pos.Y < 1 || pos.Y > HEIGHT;
        };

    protected:

    private:
        std::vector<COORD> body;
        COORD pos;
        int len;
        int vel;
        char direction;

};

#endif