#include "Num.h"
#include <cassert>
#include <iostream>

using namespace std;

//Function Declarations
void test_constructor();
void test_overloaded_constructor();
void test_deep_copy_constructor();

int main() {

    //call the test functions
    test_constructor();
    test_overloaded_constructor();
    test_deep_copy_constructor();

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
test_overloaded_constructor
Input: None
Description: Testing the overloaded constructor
Output: my_list should return true if the value is 1
*/
void test_overloaded_constructor(){
    Num my_list(1);

    assert(my_list.get() == 1);

    cout << "Overloaded Constructor Test PASSED" << endl;
}

/*
test_deep_copy_constructor
Input: None
Description: Testing the deep copy constructor
Output:
*/
void test_deep_copy_constructor(){
    Num my_list(1);

    Num my_copy_list(my_list);

    assert(my_copy_list.get() == my_list.get());

    cout << "Deep Copy Constructor Test PASSED" << endl;
}



