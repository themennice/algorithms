/*
https://www.hackerrank.com/challenges/mars-exploration/problem
*/

int marsExploration(string s) {
    int count = 0;

    for(int i = 0; i < s.length() - 2; i += 3)
    {
        if(s[i] != 'S')
            count++;
        if(s[i+1] != 'O')
            count++;
        if(s[i+2] != 'S')
            count++;
    }
    return count;
}