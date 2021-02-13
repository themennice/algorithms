//https://leetcode.com/problems/minimum-number-of-steps-to-make-two-strings-anagram/
// O(n) time for single for loops and O(1) space for array of 2 elements

int minSteps(string s, string t) {
    int min_steps = 0;
    int alpha[26] = {0};
    for(int i = 0; i < s.length(); i++)
        alpha[t[i] - 'a']++;
    for(int i = 0; i < t.length(); i++)
        alpha[s[i] - 'a']--;
    for(int i = 0; i < 26; i++)
        min_steps += abs(alpha[i]);
    return min_steps/2;
}