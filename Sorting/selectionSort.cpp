// selectionSort.cpp

#include <iostream>

// Find the nth smallest value and put it in the nth slot
// Smallest value goes into slot 0, then the next smallest goes into slot 1
// Divide array into sorted and unsorted subarrays
// Initially, the sorted subarray is empty; the unsorted subarray is the entire
// array Swap the smallest unsorted element with the first unsorted element Now
// the sorted subarray is one element larger, and the unsorted subarray is one
// element smaller Repeat until the unsorted array is empty

// For i in [0..(size - 1)]
// let imin be index of minimum element in a^i thru a^size-1
// Swap elements a^i and a^imin (note: can avoid if i = min)

int indexOfMin(int values[], int from, int to) {
    int result = from;

    // testing against the elements of i to find the smallest
    for (int i = from + 1; i < to; i++) { //O(n)
        if (values[i] < values[result]) {
            result = i;
        }
    }
    return result;
}

void selectionSort(int values[], int size) {
    // loop thru i
    for (int i = 0; i < size - 1; i++) { //o(n)
        std::swap(values[i], values[indexOfMin(values, i, size)]);
    }
}

//recursive version
 void selectRecurse(int values[], int from, int to){
     if(from >= to) return;
     std::swap(values[from], values[indexOfMin(values, from, to)]);
     selectRecurse(values, from + 1, to);
}

int main (){
    int values[] = {5, 4, 3, 2, 1};
    int size = 5;

    selectRecurse(values, 0, size);

    for (int i = 0; i < size; i++) {
        std::cout << values[i] << " ";
    }
    return 0;
}