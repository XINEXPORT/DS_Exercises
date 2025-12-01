// heapSort

#include <iostream>

// in-place: keep heap inside the array itself
// can't leave slot 0 empty, but you can work around that
// use max heap to sort in increasing order
// run buildHeap() to create a max heap in the array
// repeat n times (for i = n-1; while i > 0)
// remove and save max value (note: removing creates a vacant slot at the end)
// store the max element in the vacated slot at index i

// naive heapSort in asc order
void heapSort(std::string list[], int size) {
    MinHeap h(list, size);

    for (int i = 0; i < size; i++) {
        list[i] = h.removeMin();
    }
}

void makeHeap(&nums[0], &nums[len]) {
    for (int i = 0; i < len - 1; i++) {
        pop_heap(&nums[0], &nums[len - i]);
    }
}

int main() {
    return 0;
}