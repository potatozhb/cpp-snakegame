#include "helper.h"

template<class T>
int Helper<T>::sub(int a, int b)
{
    return a - b;
}


// Explicit instantiation for int and double
template class Helper<int>;
template class Helper<double>;