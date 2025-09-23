//CircularArray.h

#include <iostream>
#include <string>

#ifndef CIRCULAR_ARRAY_H
#define CIRCULAR_ARRAY_H

using namespace std;

struct Node {
    int num;
    double num2;
};

class CircularArray{
    public:
     CircularArray(int capacity);
     ~CircularArray();

     int enqueue(const Node &data);
     Node *dequeue();
     int getSize();

    private:
     int size;
     int capacity;
     Node *head;
     Node *tail;
     Node *arr;
};

#endif