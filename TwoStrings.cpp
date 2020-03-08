/*
Given two strings, determine if they have a common substring.
https://www.hackerrank.com/challenges/two-strings/problem
Return YES if true and NO if there are no common substrings.
*/

#include <string>
#include <iostream>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
    int arr1[26] = {0};
    int arr2[26] = {0};
    for(int i = 0; i < s1.length(); i++)
        arr1[s1[i] - 'a']++;
    for(int i = 0; i < s2.length(); i++)
        arr2[s2[i] - 'a']++;

    for(int i = 0; i < 26; i++)
    {
        if(arr1[i] > 0 && arr2[i] > 0)
            return "YES";
    }
    return "NO";
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
    }
    return 0;
}
