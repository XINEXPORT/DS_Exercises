//array_On.cpp
//O(n) runtime

#include <bits/stdc++.h>
using namespace std;

void print (char arr[], int numItems, int idx){
    char copy_arr[(2 * numItems)];

    for(int i  = 0; i < numItems; i++){
        copy_arr[i] = copy_arr[numItems + i] = arr[i];
    }

    for(int i = idx; i < numItems + idx; i++){
        cout << copy_arr[i] << " ";
    }
}

int main(){
    char arr[] = {'C', 'H', 'R', 'I', 'S'};
    int n = sizeof(arr) / sizeof(arr[0]);
    print (arr, n, 4);
    return 0;
}