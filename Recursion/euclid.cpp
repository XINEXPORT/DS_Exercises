#include <iostream>

using namespace std;

int euclid(int m, int n) {
    if (n == 0) {
        return m;
    } else {
        return euclid(n, m % n);
    }
}

int main() {
    int result = euclid(12, 8);
    cout << result << endl;
    return 0;
}