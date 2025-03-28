#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <string>

using namespace std;

class BaseHelper
{
};

template <typename T>
class Helper : public BaseHelper
{
private:
    T data;
public:
    int n {};

    // Default constructor
    Helper() : data(T()) {}
    Helper(T val) : data(val) {};
    ~Helper(){};
    
    static void log(string content)
    {
        cout << "print from helper log:" << content << endl;
    }

    static T add(T a, T b)
    {
        return a+b;
    }

    Helper operator+ (const Helper& h)
    {
        Helper helper; 
        helper.n = this->n + h.n;
        
        return helper;
    }

    
    int sub(int a, int b);
};


#endif