/*
* A music playlist
* Example of a basic linked structure and manipulation without classes.
*/

#include <iostream>

using namespace std;

struct SongListNode{
  string name;
  SongListNode *next;
};

/*
* Allocate and intialize a new song list node
*/
SongListNode *newSongListNode(string name, SongListNode *next){

  SongListNode *result = new SongListNode;

  result->name = name;
  result->next = next;

  return result;
}

SongListNode *newSongListNode(string name) {
  return newSongListNode(name, nullptr);
}

void printListLoopily(SongListNode *first) {
    while(first != nullptr){
      cout << first->name << endl;
      first = first->next;
    }
}

//recursive printList
//the base case is an empty list
void printListRecurse(SongListNode *first) {
    if(first != nullptr){
      cout << first->name << endl;
      printListRecurse(first->next);
    }
}

void recycleListLoopily(SongListNode *first){
    while(first!= nullptr){
      SongListNode *temp = first;
      first = first->next;
      delete temp;
    }
}

void recycleListRecurse(SongListNode *first){
    if(first != nullptr) {
        recycleListRecurse(first->next);
        cerr << "Starting recycle node " << first->name << " at " << first << endl;
        delete first;
    }
}

int main() {
  SongListNode *song1 = newSongListNode("more");

  SongListNode *songs = newSongListNode("unforgettable",
                                        newSongListNode("mona_lisa", song1));

//   printListLoopily(songs);
//   printListRecurse(songs);
//   recycleListRecurse(songs);
  recycleListLoopily(songs);

  return 0;
}