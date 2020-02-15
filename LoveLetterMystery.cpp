/* https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
Given a number of strings, find the minimum number of
operations to turn each string into a palindrome.
All characters are lower-case English characters.
*/
#include <iostream>

using namespace std;

// Complete the theLoveLetterMystery function below.
int theLoveLetterMystery(string s) {

    // Initialize the minimum number of operations variable
    int min_num_oper = 0;
    // Define the length of a given string to save time and improve code readability
    int str_len = s.length();

    // Loop untill the middle of the string and compute
    // The difference between mirror characters w.r.t. the middle
    for(int i = 0; i < str_len/2; i++)
    {
        min_num_oper += abs(s[i] - s[str_len - i - 1]);
    }
    // The result of adding all the absolute differences above yields the number needed
    return min_num_oper;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = theLoveLetterMystery(s);

        cout << result << "\n";
    }

    return 0;
}
