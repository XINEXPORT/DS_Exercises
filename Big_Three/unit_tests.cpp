#include "Num.h"
#include <cassert>
#include <iostream>

using namespace std;

//function declarations
void test_constructor();

int main() {

    //call the test function
    test_constructor();

    return 0;
}

//tests go here
void test_constructor(){
    Num my_list;

    assert(my_list.get() == 0);

    cout << "Default Constructor Test PASSED " << endl;
}