#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    
    map<string,int> namePhoneDict;
    long long int counter = 0;
    cin >> counter;
    for(int i = 0; i < counter; i++)
    {
        string name;
        long long int number;
        cin >> name;
        cin >> number;
        namePhoneDict[name] = number;
    }
    string find;
    while(cin >> find)
    {
        // string find;
        //cin >> find;
        if(namePhoneDict[find] == 0)
            cout << "Not found" << endl;
        else
            cout << find << "=" << namePhoneDict[find] << endl;
    }
    return 0;
}

