/*
Determine the min number of steps to
convert two given string of lower-case
English characters into anagrams of
each other. Two strings are anagrams if
they have the same letters with the same
frequencies but in a different order.
i.e., acde and edca are anagrams.

Input: two string of different lengths
Output: an integer denoting the number of
necessary deletions.
*/

#include <iostream>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    // Define an array of size 26 for lowercase English letters
    int arr[26] = {0};

    // Intialise the counter
    int num_del = 0;

    // Add frequencies of a to the array
    for(int i = 0; i < a.length(); i++)
    {
        arr[a[i] - 'a']++;
    }
    // Subtract frequencies of b to the array
    for(int i = 0; i < b.length(); i++)
    {
        arr[b[i] - 'a']--;
    }

    // The difference is the number of characters
    // needed to be deleted.
    for(int i = 0; i < 26; i++)
    {
        //cout << arr[i] << " ";
        if(arr[i] != 0)// && arr[i] % 2 != 0)
            //since numbers in the array could be -ve, absolute values are taken
            num_del += abs(arr[i]);
    }
    return num_del;
}

int main()
{

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    cout << res << endl;

    return 0;
}
