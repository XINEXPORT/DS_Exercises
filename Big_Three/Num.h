#include <iostream>

#ifndef NUM_H
#define NUM_H

class Num {
    public: 

        //constructors
        Num();
        Num (double initialValue);
        Num(const Num &other);

        //destructor
        ~Num();

        //getter
        double get();

        //setter
        void set(double newValue);

        //Assignment Operator
        Num &operator=(const Num &rhs);

    private: 
        double *valuePtr;
};

#endif