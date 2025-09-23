     //OrderQueue.cpp

     #include "OrderQueue.h"

     OrderQueue::OrderQueue(){
        queue = new OrderLinkedList();
     }

     OrderQueue::~OrderQueue() {
        delete queue;
    }

     void OrderQueue::add(Order order){
        queue.pushAtBack(order);
     }

     Order OrderQueue::removeFirst(){
        Order result = queue.elementAt(0);
        queue.popFromFront();
        return result;
     }

     int OrderQueue::size(){
        return queue.size();
     }
