/*
Given strings of characters A and B,
find the number of chars needed
to be deleted in order to make
no two adjacent characters be the same.
*/

#include <iostream>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s) {
    int num_del = 0;
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            num_del++;
        }
    }
    return num_del;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = alternatingCharacters(s);

        cout << result << "\n";
    }

    return 0;
}
