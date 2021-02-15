// https://leetcode.com/problems/increasing-decreasing-string
// O(n) for the while loop and O(1) time for the 26 constant passes in the nested for loop, O(n) overall
// O(n) space for output and array

string sortString(string s) {
    string res = "";
    int cnt[26] = {};
    for (auto ch: s)
        ++cnt[ch - 'a'];
    while (s.size() != res.size()) {
        for (auto i = 0; i < 26; ++i)
            res += string(--cnt[i] >= 0 ? 1 : 0, 'a' + i); 
        for (int i = 25; i >=0; --i)
            res += string(--cnt[i] >= 0 ? 1 : 0, 'a' + i);          
    }
    return res;
}   