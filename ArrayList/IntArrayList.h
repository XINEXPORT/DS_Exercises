#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H

typedef int ElemType;

class IntArrayList
{
public:
        IntArrayList();
        IntArrayList(int initialSize, ElemType initialValue);
        ~IntArrayList();

        int size();

        void addAtBack(ElemType elt);
        void addAtFront(ElemType elt);
        void addAt(ElemType elt, int index);
        void removeAt(int index);
        void removeFirstOccurrence(ElemType elt);
        int indexOf(ElemType elt);
        ElemType elementAt(int index);

private:
        int currSize, capacity;
        ElemType *data;

        void doubleCapacity();
};

#endif
