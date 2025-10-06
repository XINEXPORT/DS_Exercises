//main.cpp

#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

void print_rectangles(Rectangle rectangles[], int num_rectangles);

int main(){
    //make an array of reactangles to play with

                              // rect 1
    Rectangle rectangles[3] = {Rectangle(Point(3, 4), Point(8, 15)),
                               // rect 2
                               Rectangle(Point(1, 20), Point(17, 22)),
                               // rect 3
                               Rectangle(Point(30, 1), Point(40, 8))};

    cout << "Here are the rectangles, print: " << endl;

    print_rectangles(rectangles, 3);
    cout << endl;

    return 0;
}

void print_rectangles(Rectangle rectangles[], int num_rectangles) {
    for (int i = 0; i < num_rectangles; i++) {
        rectangles[i].print();
        cout << endl;
    }
}