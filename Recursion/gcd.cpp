#include <iostream>

using namespace std;

int gcd(int m, int n, int guess) {
    if (((m % guess) == 0) and ((n % guess) == 0)) {
        return guess;
    } else {
        return gcd(m, n, guess - 1);
    }
}

int gcd(int m, int n) {
    // use n as our first guess
    return gcd(m, n, n);
}

int main() {
    int result = gcd(12, 8, 5);
    cout << result << endl;
    return 0;
}