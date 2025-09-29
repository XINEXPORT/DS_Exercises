#include <iostream>

using namespace std;

// how to count up recursively from n to count
void countUp(int count) {
    // what is the base case?
    // the base case is the count is less than 0
    // 10 < 0? No
    // 9 < 0? No
    // 0 < 0? No
    //-1 < 0? Yes
    if (count < 0) {
        return;
    } else {
        countUp(count - 1);
        cout << count << endl;
    }
}

int main() {
    countUp(10);
    return 0;
}