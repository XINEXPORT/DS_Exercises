/*
 * A LinkedList
 * Example of a basic linked linked list with classes
 */

#include "StringLinkedList.h"

#include <iostream>

using namespace std;

// default constructor
StringLinkedList::StringLinkedList() {

};

// length helper
int StringLinkedList::lengthHelper(Node *first){

}

// Return pointer to newly allocated and initiaized node on heap
StringLinkedList::Node *StringLinkedList::findNode(ElemType data, Node *next) {
    Node *result = new Node;

    result->data = data;
    result->next = next;

    return result;
};

//insert Node after
void StringLinkedList::insertNodeAfter(Node *pnode, Node pNewNode){

}