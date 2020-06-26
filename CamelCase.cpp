/*
https://www.hackerrank.com/challenges/camelcase/problem
*/

int camelcase(string s) {

    int count = 1;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] - 'a' < 0)
            count++;
    }
    return count;
}