//OrderQueue.h

#include <iostream>

#ifndef ORDERQUEUE_H
#define ORDERQUEUE_H

class OrderQueue {
    public:
     OrderQueue();
     void add(Order order);
     void removeFirst();
     int size();

    private:
        OrderLinkedList queue;
};

#endif