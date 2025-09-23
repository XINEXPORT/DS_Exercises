// main.cpp

#include "CircularArray.h"
#include <cstdlib>

int main() {
    CircularArray area_code(11);

    area_code.enqueue({7, 242});
    area_code.enqueue({5, 252});
    area_code.enqueue({6, 267});
    area_code.enqueue({4, 305});
    area_code.enqueue({3, 319});
    area_code.enqueue({1, 320});
    area_code.enqueue({2, 339});
    area_code.enqueue({11, 341});
    area_code.enqueue({10, 347});
    area_code.enqueue({9, 340});
    area_code.enqueue({8, 360});

    int size = area_code.getSize();
    for (int i = 0; i < size; i++) {
        Node *city = area_code.dequeue();

        cout << "Cities i'd like visit: " << "Rank: "<<city->num <<  ", "
        << "Area Code: "<< city->num2 << endl;
    }

    return EXIT_SUCCESS;
}