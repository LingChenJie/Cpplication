//
// Created by SM2226 on 2023/3/17.
//

#include "Facer.h"


Facer::Facer(
        const string &top,
        const string &bottom,
        const string &brow,
        const string &eyes)
        : top(top),
          bottom(bottom),
          brow(brow),
          eyes(eyes) {}

Facer::~Facer() {}

void Facer::printFace() {
    cout << getFace() << endl;
}


string Facer::getFace() {
    string result;
    for (int i = 0; i < 10; ++i) {
        i != 9 ? result += top : result += top + "\n";
    }
    result += "|  " + brow + "   " + brow + " |" + "\n";
    result += "|  " + eyes + "   " + eyes + " |" + "\n";
    result += "|    -}    |\n";
    for (int i = 0; i < 10; ++i) {
        i != 9 ? result += bottom : result += bottom + "\n";
    }
    return result;
}
