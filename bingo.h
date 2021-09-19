#pragma once

#include <iostream>
using namespace std;

void chirp(int i){
    cout << "chirp " << i << endl;
}


static int counter = 0;

static int addOneToCounter(){
    return ++counter;
}
