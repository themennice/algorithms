// https://leetcode.com/problems/find-words-that-can-be-formed-by-characters

int countCharacters(vector<string>& words, string chars) {
    int res = 0;
    vector<int> cnt(26);
    for (auto ch : chars) ++cnt[ch - 'a'];
    for (auto word: words) {
    vector<int> cnt1 = cnt;
    bool match = true;
    for (auto ch : word) {
      if (--cnt1[ch - 'a'] < 0) {
        match = false;
        break;
      }
    }
    if (match) res += word.size();
    }
    return res;
}