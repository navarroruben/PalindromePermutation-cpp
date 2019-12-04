// Ruben Navarro
// 12/04/2019
// main.cpp
// CTCI - Palindrome Permutation
// Given a string, checks if it is a permutation of a palindrome.

#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <list>
#include "prototypes.h"

int main() {

    std::string str = "Tact Coa";
    std::map<char, std::list<char> > mymap;

    if(!checkIfEmpty(str)) {
        std::cout << "String must not be empty\n";
        return 0;
    }

    if (!checkSize(str)) {
        std::cout << "String must contain more than two characters\n";
        return 0;
    }

    std::sort(str.begin(), str.end());

    transferCharsToMap(str, mymap);

if (!checkValidity(mymap)) {
    std::cout << "String: " << str << " is not a valid Palindrome\n";
}
else
    std::cout << "String: " << str << " is a valid Palindrome\n";
    return 0;
}