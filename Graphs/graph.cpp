// graph.cpp

#include "graph.h"

using namespace std;

int main() {
    return 0;
}

/*
    1 ----- 2
   /  \   /  \
  3 --- 4 --- 5
  \   /   \   /
    6 ----- 7

Adjacency Matrix
          To
     +---+---+---+---+---+---+---+
From | 1 | 2 | 3 | 4 | 5 | 6 | 7 |
+-----+---+---+---+---+---+---+---+
| 1   | F | T | T | T | F | F | F |
| 2   | F | F | F | T | T | F | F |
| 3   | F | F | F | F | F | T | F |
| 4   | F | F | T | F | F | T | T |
| 5   | F | F | F | T | F | F | T |
| 6   | F | F | F | F | F | F | F |
| 7   | F | F | F | F | F | T | F |
+-----+---+---+---+---+---+---+---+

*/