#include <iostream>
#include "IntArrayList.h"

using namespace std;

int main() {

    IntArrayList al1;

    cout << "initial size: " << al1.size() << endl;
    al1.addAtBack(-12);
    cout << "size should be 1: " << al1.size() << ";"
    << " element should be -12: " << al1.elementAt(0) <<endl;

    return 0;
}