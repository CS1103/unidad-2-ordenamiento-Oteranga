//
// Created by Alejandro  Otero on 2019-10-01.
//

#ifndef PROYECTO_2_ELEMENTOS_H
#define PROYECTO_2_ELEMENTOS_H

#endif //PROYECTO_2_ELEMENTOS_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Data {
    string country_or_area;
    int year;
    string commodity; //concat
    string flow;
    double trade_usd;
    Data(const string &country, int year, const string &commodity,const string &flow, double trade):country_or_area(country),year(year),commodity(commodity),flow(flow),trade_usd(trade){}
};
