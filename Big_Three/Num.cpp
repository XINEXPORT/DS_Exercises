#include "Num.h"

//default constructor
Num::Num() 
{
    valuePtr = new double;
    *valuePtr = 0.0;
}

//overloaded constructor
//uses shallow copy default
Num::Num(double initialValue)
{
    valuePtr = new double;
    *valuePtr = initialValue;
}

//copy constructor
//allows for a deep copy
Num::Num(const Num &other)
{
    valuePtr = new double;
    *valuePtr = *other.valuePtr;
}

//destructor
Num::~Num()
{
    delete valuePtr;
}

//getter
double Num::get()
{
    return *valuePtr;
}

//setter
void Num::set(double newValue)
{
    *valuePtr = newValue;
}