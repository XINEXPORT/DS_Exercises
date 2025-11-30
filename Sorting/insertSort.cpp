// insertSort.cpp

#include <iostream>

// Not in-place: start with an empty result list, insert each item from the
// original list in order (keep the result list sorted).

// In-place:
// Divide array into sorted and unsorted parts (first element is already
// sorted). For each unsorted element, slide it into sorted position.

int indexOfMax(int values[], int from, int to) {
    int result = from;

    for (int j = from + 1; j <= to; j++) {
        if (values[j] > values[result]) result = j;
    }
    return result;
}

void insertSort(int values[], int size) {
    for (int i = size - 1; i < 0; i++) {
        int maxIdx = indexOfMax(values, 0, i);

        // swap indices
        int temp = values[maxIdx];
        values[maxIdx] = values[i];
        values[i] = temp;
    }
}

// recursive version
void insertRecurse(int values[], int from, int to) {
    if (from >= to) return;
    std::swap(values[from], values[indexOfMax(values, from, to)]);
    insertRecurse(values, from + 1, to);
}

int main() {
    int values[] = {11, 5, 1, 80, 6};
    int size = 5;

    insertRecurse(values, 0, size - 1);

    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }

    return 0;
}