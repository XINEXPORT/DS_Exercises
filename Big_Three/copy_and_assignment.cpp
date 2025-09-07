#include "Num.h"

using namespace std;

int main() {

    //create a variable called num0 with default constructor
    //create a variable called num1 with overloaded constructor
    //create a variable called num2 with overloaded constructor using a copy of num1
    //create a variable called num3 with default constructor
    //let num3 be num0

    Num num0; //default constructor
    Num num1{1.0};
    Num num2{num1}; //same as Num num2 = num1
    Num num3{2.0};

    cout << "Num1 is: " << num1.get() << endl;
    cout << "Num2 is: " << num2.get() << endl;
    cout << "Num3 is: " << num3.get() << endl;

    num3 = num0;

    cout << "Num3 is now: " << num3.get() << endl;
     
    return 0;
}
