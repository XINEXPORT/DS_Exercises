#include <iostream>

using namespace std;

//how to count down recursively from n to 0
void countDown(int count) {

    //base case is either 0 or not 0
    //it is also not a negative number
    if (count <= 0){
        cout << "Blastoff!" << endl;
        return;
    } else {
        cout << count << endl;
        countDown(count - 1);
    }
}

int main(){
    countDown(10);
    return 0;
}