#include <iostream>

using namespace std;

double power(double base, int expo) {
    if (expo == 0) {
        return 1;
    } else {
        cout << base * power(base, expo - 1) << endl;
        return base * power(base, expo - 1);
    }
}

int main() {
    double result = power(3, 3);
    cout << "Power: " << result << endl;
    return 0;
}