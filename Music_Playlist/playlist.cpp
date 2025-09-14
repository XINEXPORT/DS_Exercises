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

int main() {
  SongListNode *song1 = newSongListNode("more");

  SongListNode *songs = newSongListNode("unforgettable",
                                        newSongListNode("mona_lisa", song1));

  cout << "First song: " << songs->name << endl;
  cout << "Second song: " << songs->next->name << endl;
  cout << "Second song: " << songs->next->next->name << endl;

  return 0;
}