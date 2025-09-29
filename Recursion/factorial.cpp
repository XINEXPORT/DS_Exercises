#include <iostream>

using namespace std;

long factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        cout << n * factorial(n - 1) << endl;
        ;
        return n * factorial(n - 1);
    }
}

int main() {
    long result = factorial(4);
    cout << "Factorial: " << result << endl;
    return 0;
}