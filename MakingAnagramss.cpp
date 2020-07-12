/*
https://www.hackerrank.com/challenges/making-anagrams/problem
*/

int makingAnagrams(string s1, string s2) {
    int alpha1[26]{0};
    int alpha2[26]{0};

    for(int i = 0; i < s1.length(); i++)
    {
        alpha1[s1[i] - 'a']++;
    }
    for(int i = 0; i < s2.length(); i++)
    {
        alpha2[s2[i] - 'a']++;
    }
    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(alpha1[i] != alpha2[i])
        {
            count += abs(alpha1[i] - alpha2[i]);
        }
    }
    return count;
}