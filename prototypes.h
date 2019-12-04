// Ruben Navarro
// 12/04/2019
// main.cpp
// CTCI - Palindrome Permutation
// Given a string, checks if it is a permutation of a palindrome.

#include <string>
#include <map>
#include <list>

#ifndef PROTOTYPES_H
#define PROTOTYPES_H

bool checkIfEmpty(std::string);
bool checkSize(std::string);
void transferCharsToMap(std::string, std::map<char, std::list<char> > &);
bool checkValidity(std::map<char, std::list<char> >);

#endif //PROTOTYPES_H
