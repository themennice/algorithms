/*
https://www.hackerrank.com/challenges/pangrams/problem

Time complexity: O(n)
*/

string pangrams(string s) {
    int alpha[26] = {0};
    for(int i = 0; i < s.length(); i++)
    {   
        if(s[i] >= 97 && s[i] <= 122)
        {
            alpha[s[i]-97]++;
        }
        else if(s[i] >= 65 && s[i] <= 90)
        {
            alpha[s[i]-65]++;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] == 0)
            return "not pangram";
    }
    return "pangram";
}