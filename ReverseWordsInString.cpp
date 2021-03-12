// https://leetcode.com/problems/reverse-words-in-a-string-iii/
// O(n^2) time and O(1) space

string reverseWords(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            int j = i;
            for (; j < s.length() && s[j] != ' '; j++) { }
            reverse(s.begin() + i, s.begin() + j);
            i = j - 1;
        }
    }
    return s;
}