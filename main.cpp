#include <iostream>
#include <cstdlib>
#include "windows.h"
#include "snake.h"
#include <conio.h>
#include "food.h"
#include <thread>
#include <vector>

#define sq(x) x*x

using namespace std;


Snake snake({25,12},1);
Food food;


void board()
{
    COORD snakepos = snake.getPos();
    COORD foodpos = food.getPos();

    for(int i=0;i<HEIGHT;i++)
    {
        cout << "\t#";
        for(int j=0;j<WIDTH-2;j++)
        {
            if(i == 0 || i== HEIGHT-1)
                cout << "#";
            else if(i == snakepos.Y && j+1 == snakepos.X)
            {
                cout << '0';
            }
            else if(i == foodpos.Y && j+1 == foodpos.X)
                cout << '*';
            else
            {
                auto body = snake.getBody();
                bool bBody = false;
                for(int k=0;k<body.size();k++)
                {
                    if(i == body[k].Y && j+1 == body[k].X)
                    {
                        bBody = true;
                        break;
                    }
                }

                if(bBody)
                    cout << 'o';
                else 
                    cout << " ";
            }
        }
        cout << "#\n";
    }
}


int main()
{
    cout << "hello world->" << sq(15) << endl;

    srand(time(NULL));
    food.genFood();

    while (true)
    {
        board();
        
        if(kbhit())
        {
            switch (getch())
            {
                case 'w': snake.changeDir('u'); break;
                case 'a': snake.changeDir('l'); break;
                case 's': snake.changeDir('d'); break;
                case 'd': snake.changeDir('r'); break;
                
                default:
                    break;
            }
        }
        snake.moveSnake();
        if(snake.eaten(food.getPos()))
        {
            food.genFood();
            snake.grow();
        }
        //system("cls");
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), {0 , 0});
        this_thread::sleep_for(chrono::milliseconds(100));

        if(snake.collided()) break;
    }
    
    cout << "game over, press 'Q' quit the game" << endl;
    string quit;
    cin >> quit;

    return 0;
}