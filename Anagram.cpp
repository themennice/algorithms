/*
https://www.hackerrank.com/challenges/anagram/problem
*/

int anagram(string s) {
    if(s.length() % 2 == 1)
        return -1;
    string s1=s.substr(0,s.length()/2);
    string s2=s.substr(s.length()/2,s.length()/2);
    int alpha1[26]{0};
    int alpha2[26]{0};
    for (int i = 0; i < s.length()/2; ++i)
    {
        alpha1[s1[i] - 'a']++;
        alpha2[s2[i] - 'a']++;
    }
    int ans = 0;
    for (int i = 0; i < 26; ++i)
    {
        ans += abs(alpha1[i] - alpha2[i]);
    }
    return floor(ans / 2);
}