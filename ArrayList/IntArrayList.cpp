#include <iostream>
#include "IntArrayList.h"

using namespace std;

IntArrayList::IntArrayList()
{
    currSize = 0;
    capacity = 0;
    data = nullptr;
}

IntArrayList::~IntArrayList()
{
    delete [] data;
}

int IntArrayList::size() 
{
    //this -> is the address of the function it is called from
    return this->currSize;
}

void IntArrayList::addAtBack(ElemType elt)
{
    if (currSize == capacity) {
        doubleCapacity();
    }
    data[currSize] = elt; 
}

ElemType IntArrayList::elementAt(int index)
{
    return data[index]; //bug
}

void IntArrayList::doubleCapacity()
{
    int newCapacity = (capacity * 2) + 2;

    ElemType *newArray = new ElemType[newCapacity];

    //copy data to the new array
    for (int i = 0; i < currSize; i++) {
        newArray[i] = data[i];
    }
    //recycle the old array
    delete [] data;
    data = newArray;
    capacity = newCapacity;

}