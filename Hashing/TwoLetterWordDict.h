
#ifndef TWOLETTERWORDDICT_H
#define TWOLETTERWORDDICT_H

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class TwoLetterWordDict {
   public:
    void insert(string twoLetterWord, string definition) {

    }

    string lookup(string twoLetterWord){

    }

   private:
    static const int LETTERS = 26;
    string definitions[LETTERS * LETTERS];

    //c++ default constructor will initialize all
    //definitions with empty strings
};

#endif