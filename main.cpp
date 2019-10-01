#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "sort.h"
#include "shell.h"
#include "quick.h"
#include "merge.h"
#include "heap.h"
#include "elementos.h"
using namespace std;


int main() {

    ifstream file;
    file.open("commodity_trade_statistics_data.csv",ios::in);
    vector<Data> datos;
    string country_or_area;
    string year;
    string commodity; //concat
    string flow;
    string trade_usd;

    while(file.good()){
        getline(file, country_or_area,',');
        getline(file, year,',');
        getline(file, commodity,',');
        getline(file, flow,',');
        getline(file, trade_usd,',');

        datos.emplace_back(country_or_area,year,commodity,flow,trade_usd);
    }



    return 0;
}
