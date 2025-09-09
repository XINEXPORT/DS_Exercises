#include "Num.h"

// default constructor
Num::Num() {
    valuePtr = new double;
    *valuePtr = 0.0;
}

// overloaded constructor
// uses shallow copy default
Num::Num(double initialValue) {
    valuePtr = new double;
    *valuePtr = initialValue;
}

// copy constructor
// allows for a deep copy
Num::Num(const Num &other) {
    // can be written explicitly
    // valuePtr = new double;
    // *valuePtr = *other.valuePtr;

    // or using this->
    this->valuePtr = new double;
    *this->valuePtr = *other.valuePtr;
}

// operator overloader for '='
Num& Num::operator=(const Num& rhs) {
    if (this == &rhs) {
        return *this;
    }

    delete valuePtr;

    valuePtr = new double;
    *valuePtr = *rhs.valuePtr;

    return *this;
}

// destructor
Num::~Num() {
    delete valuePtr;
}

// getter
double Num::get() {
    return *valuePtr;
}

// setter
void Num::set(double newValue) {
    *valuePtr = newValue;
}