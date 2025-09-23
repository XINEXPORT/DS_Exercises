//sum.cpp

using namespace std;

int main(){
    return 0;
}

double sum(double nums[], int len) {

    double result = 0.0;

    for (int i = 0; i < len; i++) {
        result += nums[i];
    }
    return result;
 }

 //invariant:
 //start of the kth iteration of the loop,
 //result is sum of elements 0...(k-1) (inclusive)
 //on last loop test, i = len