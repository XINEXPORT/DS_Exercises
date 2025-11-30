// selectionSortMax.cpp

#include <iostream>

int indexOfMax(int values[], int from, int to) {
    int result = from;

    for (int j = from + 1; j <= to; j++) {
        if (values[j] > values[result]) result = j;
    }
    return result;
}

void selectionSortMax(int values[], int size) {
    for (int i = size - 1; i > 0; i--) {
        int maxIdx = indexOfMax(values, 0, i);

        // swap indices
        int temp = values[maxIdx];
        values[maxIdx] = values[i];
        values[i] = temp;
    }
}

// recursive version
void selectRecurseMax(int values[], int from, int to) {
    if (from >= to) return;
    std::swap(values[from], values[indexOfMax(values, from, to)]);
    selectRecurseMax(values, from + 1, to);
}

int main() {
    int values[] = {11, 5, 1, 80, 6};
    int size = 5;

    selectRecurseMax(values, 0, size - 1);

    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }

    return 0;
}