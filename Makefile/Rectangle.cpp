// rectangle.cpp

#include <iostream>

using namespace std;

#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle(Point low_left, Point up_right) {
    lower_left = low_left;
    upper_right = up_right;
}

void Rectangle::print() {
    std::cout << "[Rectangle: " << "Lower left: ";
    lower_left.print();
    std::cout << "; " << "Upper right: ";
    upper_right.print();
    std::cout << "]";
}