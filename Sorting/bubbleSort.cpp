// bubbleSort

#include <iostream>

void compare(int values[], int size, int i) {
    for (int j = 0; j < size - i - 1; j++) {
        if (values[j] > values[j + 1]) {
            std::swap(values[j], values[j + 1]);
        }
    }
}

void bubbleSort(int values[], int size) {
    for (int i = 0; i < size - 1; i++) {
        compare(values, size, i);
    }
}

// recursive version
void bubbleRecurse(int values[], int size, int i) {
    if (i >= size - 1) return;
    compare(values, size, i);
    bubbleRecurse(values, size, i + 1);
}

int main() {
    int values[] = {11, 5, 1, 80, 6};
    int size = 5;

    bubbleRecurse(values, size, 0);

    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }
    return 0;
}