#include <iostream>

#ifndef STRINGLINKEDLIST_H
#define STRINGLINKEDLIST_H

typedef int ElemType;

class StringLinkedList {
   public:
    // constructors
    StringLinkedList();
    StringLinkedList(int initializeSize, ElemType initialValue);

    // destructor
    ~StringLinkedList();

    int size();

    void addAtBack(ElemType elt);
    void addAtFront(ElemType elt);
    void addAt(ElemType elt, int index);
    void removeAt(int index);
    int indexOf(ElemType elt);
    int lengthHelper();
    ElemType elementAt(int index);
    void findNode(ElemType data, Node *next);

   private:
    // type definition living inside the class
    struct Node {
        ElemType data;
        Node *next;
    };
};

#endif