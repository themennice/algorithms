/*
https://www.hackerrank.com/challenges/sparse-arrays/problem
Given input strings find our how many of them satisfy the query strings.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    // Create a map for input strings and their number of occurence, 0 by default
    map <string, int> umap;
    // Set up number of strings and number of queries
    int n, q;
    // Read the number of strings
    cin >> n;
    // Set up a temporary str for reading stdin
    string str;
    // Read n strings and increment the index of map
    for(int i = 0; i < n; i++)
    {
        cin >> str;
        umap[str]++;
    }
    // Read the number of queries
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> str;
        cout << umap[str] << endl;
    }
    return 0;
}