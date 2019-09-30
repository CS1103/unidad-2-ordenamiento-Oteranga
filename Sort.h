//
// Created by rudri on 9/17/2019.
//

#ifndef SORT_METHODS_SORT_H
#define SORT_METHODS_SORT_H

#include <iostream>
using namespace std;

template <typename T>

class Sort{
protected:
    T *elementos;
    size_t size;
public:
    Sort(T,size_t);
};


#endif //SORT_METHODS_SORT_H
