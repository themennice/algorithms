/*
https://www.hackerrank.com/challenges/string-construction/problem
*/

int stringConstruction(string s) {

    set<char> myset;
    for(int i = 0; i < s.length(); i++)
        myset.insert(s[i]);
    return myset.size();
}