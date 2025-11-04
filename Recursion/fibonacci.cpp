#include <iostream>

using namespace std;

// recursive
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// iterative
int fibIter(int n) {
    if ((n == 0) or (n == 1)) {
        return n;
    }

    int i = 2, fib_i = 1, fib_i_minus_1 = 1, fib_i_minus_2 = 0;

    while (i != n) {
        fib_i_minus_2 = fib_i_minus_1;
        fib_i_minus_1 = fib_i;
        fib_i = fib_i_minus_2 + fib_i_minus_1;
        i++;
    }
    return fib_i;
}

// runs in linear time
// example of tail recursion
int fibTailHelper(int n, int i, int fib_i_minus_1, int fib_i_minus_2) {
    int fib_i = fib_i_minus_1 + fib_i_minus_2;

    if (i == n) {
        return fib_i;
    } else {
        return fibTailHelper(n, i + 1, fib_i, fib_i_minus_1);
    }
}

// example of tail call
int fibTail(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return (fibTailHelper(n, 2, 1, 0));
    }
}


int main() {
    int result = fibonacci(4);
    cout << "Fibonacci Sequence: " << result << endl;

    int iterResult = fibIter(4);
    cout << "Iter Fibonacci Sequence: " << iterResult << endl;

    int fibTailResult = fibTail(4);
    cout << "Linear Time Fibonacci Sequence: " << fibTailResult << endl;

    return 0;
}