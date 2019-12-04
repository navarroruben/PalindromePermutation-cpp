// Ruben Navarro
// 12/04/2019
// main.cpp
// CTCI - Palindrome Permutation
// Given a string, checks if it is a permutation of a palindrome.

#include <string>
#include <map>
#include <list>

bool checkSize(std::string s) {
    return s.length() >= 2;
}

bool checkIfEmpty(std::string s) {
    return !(s == "");
}

void transferCharsToMap(std::string s, std::map<char, std::list<char> > &m) {
    for (auto c : s)
        if (c != ' ')
            m[tolower(c)].push_back(tolower(c));
}

bool checkValidity(std::map<char, std::list<char> > m) {
    int count = 0;
    auto it = m.begin();
    auto it2 = it->second.begin();

    for (; it != m.end(); ++it) {

        if (it->second.size() > 2)
            return false;
        else if (it->second.size() == 1)
            ++count;

        if (count == 2)
            return false;
    }
    return true;
}
