#include <iostream>
#include <cctype>

using namespace std;

const int LETTERS = 26;

//Assumes 'letter' is an upper or lower case letter
int letter2number(char letter)
{
    return tolower(letter) - 'a';
}

int hashTwoLetterWord(string twoLetterWord) {
    //can throw exeception if length of word =/=2
    return letter2number(twoLetterWord[0]) * LETTERS
    + letter2number(twoLetterWord[1]);
}

int main (){
    cout << hashTwoLetterWord("at") << endl;
    return 0;
}