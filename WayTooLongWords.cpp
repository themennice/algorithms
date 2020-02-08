/*
A. Way Too Long Words

Strings of length > 10 are considered to be too long.
The abreviation for such strings is defined to be
its first character, the number of digits inbetween
and its last character.

Thus, "localization" will be spelt as "l10n",
and "internationalization» will be spelt as "i18n".

Input
The first line contains an integer n (1 ≤ n ≤ 100).
Each of the following n lines contains one word.
All the words consist of lowercase Latin letters
and possess the lengths of from 1 to 100 characters.

Output
Print n lines. The i-th line should contain
the result of replacing of the i-th word from the input data.
*/

#include <iostream>
#include <string>

using namespace std;

string wayTooLong(string str)
{
    if(str.length() > 10)
    {
        string s_out = "";
        s_out += str[0];
        int counter = str.length() - 2;
        s_out += to_string(counter);
        s_out += str[str.length() - 1];
        return s_out;
    }
    return str;
}

int main()
{
    int numOfNum = 0;
    cin >> numOfNum;
    string input;
    getline(cin, input); // ignore the first line with the integer

    for(int i = 0; i < numOfNum; i++)
    {
        getline(cin, input);
        cout << wayTooLong(input) << endl;
    }
    return 0;
}