//array_o1.cpp
//O(1) runtime

#include <iostream>
using namespace std;

void print(char arr[], int numItems, int idx) {

    for (int i = idx; i < numItems + idx; i++) {
        cout << arr[(i % numItems)] << " ";

    }
}

int main(){
    char arr[] = {'C', 'H', 'R', 'I', 'S'};
    int n = sizeof(arr) / sizeof(arr[0]);
    print (arr, n, 2);
    return 0;
}