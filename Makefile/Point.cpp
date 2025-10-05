// point.cpp

#include <iostream>

using namespace std;

#include "Point.h"

// initialize point constructor
Point::Point(int x_coord, int y_coord) {
    x = x_coord;
    y = y_coord;
}

Point::Point() {
    x = y = 0;
}

// print out point
void Point::print() {
    cout << "(" << x << ", " << y << ")";
}

int Point::get_x() {
    return x;
}

int Point::get_y() {
    return y;
}

Point Point::add(Point other) {
    return Point(x + other.get_x(), y + other.get_y());
}
