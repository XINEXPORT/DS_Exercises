// insertSort.cpp

#include <iostream>

// Not in-place: start with an empty result list, insert each item from the
// original list in order (keep the result list sorted).

// In-place:
// Divide array into sorted and unsorted parts (first element is already
// sorted). For each unsorted element, slide it into sorted position.

void shift(int values[], int i) {
    int key = values[i];
    int j = i - 1;

    while (j >= 0 and values[j] > key) {
        values[j + 1] = values[j];
        j--;
    }
    values[j + 1] = key;
}

void insertSort(int values[], int size) {
    for (int i = 1; i < size; i++) {
        shift(values, i);
    }
}

// recursive
void insertRecurse(int values[], int from, int to) {
    if (from > to) return;
    shift(values, from);
    insertRecurse(values, from + 1, to);
}

int main() {
    int values[] = {55, 54, 1, 7, 13};
    int size = 5;

    insertRecurse(values, 1, size - 1);

    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }

    return 0;
}