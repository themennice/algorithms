//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping
// O(n) time, O(1) space

string freqAlphabets(string s) {
    string res;
    for (int i = 0; i < s.size(); ++i) {
        if (i < s.size() - 2 && s[i + 2] == '#') {
          res += 'a'-1 + (s[i]-'0')*10 + (s[i+1]-'0');
          i += 2;
        }
        else res += 'a' + (s[i] - '1');
        }
    return res;
}