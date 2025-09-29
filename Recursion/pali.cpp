#include <iostream>

using namespace std;

int pali(string s, int first, int last) {
    if(last - first < 1) {
        return true;
    } else if(s[first] != s[last]) {
        return false;
    } else {
        return pali(s, first + 1, last - 1);
    }
}

bool isPali(string s){
    return pali(s, 0, s.length() - 1);
}

int main() {
    bool result = isPali("abba");
    cout << result << endl;
    return 0;
}