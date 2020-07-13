/*
https://www.hackerrank.com/challenges/game-of-thrones/problem
*/

string gameOfThrones(string s) {
    int alpha[26]{0};
    for(int i = 0; i < s.length(); i++)
    {
        alpha[s[i] - 97]++;
    }
    int count = 0;
    for(auto i : alpha)
    {
        if(i % 2 == 1)
            count++;
    }
    if(count > 1)
        return "NO";
    return "YES";
}