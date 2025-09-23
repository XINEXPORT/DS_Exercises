// CircularArray.cpp

#include "CircularArray.h"

// Constructor
CircularArray::CircularArray(int capacity) {
    this->capacity = capacity;
    arr = new Node[capacity];
    tail = head = arr;
    size = 0;
}

// Destructor
CircularArray::~CircularArray() {
    delete[] arr;
}

// Enqueue
int CircularArray::enqueue(const Node &data) {

    if (size < capacity) {
        if (size == 0) {
            head = tail = arr;
            *tail = data;
            size++;
            return 0;
        }

        if (tail == &arr[capacity]) {
            tail = arr;
            *tail = data;
            size++;
        } else {
            tail = tail + 1;
            *tail = data;
            size++;
        }

        return 0;

    } else {

        return -1;
    }
}

// Dequeue
Node *CircularArray::dequeue() {
    if (size != 0) {
        Node *remove = head;

        if(head == arr + (capacity - 1)){
            head = arr;
        } else {
            head = head + 1;
        }
        size--;

        return remove;
    } else {
        cout << "Array is empty" << endl;
        return nullptr;
    }
}

// Get Size
int CircularArray::getSize() {
    return size;
}
