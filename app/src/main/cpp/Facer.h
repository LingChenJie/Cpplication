//
// Created by SM2226 on 2023/3/17.
//
#include <iostream>

using namespace std;

#ifndef CPPLICATION_FACER_H
#define CPPLICATION_FACER_H


class Facer {
public:
    Facer(const string &top = "#", const string &bottom = "#", const string &brow = "~",
          const string &eyes = ".");

    ~Facer();

public:
    string top;
    string bottom;
    string brow;
    string eyes;
public:
    void printFace();

    string getFace();
};


#endif //CPPLICATION_FACER_H
