#include "Num.h"
#include <cassert>
#include <iostream>

using namespace std;

//Function Declarations
void test_constructor();
void test_copy_constructor();

int main() {

    //call the test functions
    test_constructor();
    test_copy_constructor();

    return 0;
}

/*
test_constructor
Input: None
Description: Testing the default constructor
Output: my_list should return true if the value is 0
*/
void test_constructor(){
    Num my_list;

    assert(my_list.get() == 0);

    cout << "Default Constructor Test PASSED " << endl;
}

/*
test_copy_constructor
Input: None
Description: Testing the copy constructor
Output: my_list should return true if the value is 1
*/
void test_copy_constructor(){
    Num my_list(1);

    assert(my_list.get() == 1);

    cout << "Copy Constructor Test PASSED" << endl;
}


