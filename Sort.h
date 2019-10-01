//
// Created by Alejandro  Otero on 2019-09-26.
//

#ifndef PROYECTO_2_SORT_H
#define PROYECTO_2_SORT_H

#endif //PROYECTO_2_SORT_H

#include <iostream>
#include <vector>
#include "elementos.h"
using namespace std;

template <typename T>

class Sort{
protected:
    vector<T> v;
public:
    Sort(vector<T>);
    //void swap(T& small, T large);
    virtual void create()=0;
    //bool *comp(T a, T b);

};
