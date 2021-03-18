// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
// O(n) time and O(1) space since no extra memory is needed

string removeDuplicates(string S) {
    int i = 0, n = S.length();
    for (int j = 0; j < n; ++j, ++i) {
        S[i] = S[j];
        if (i > 0 && S[i - 1] == S[i])
            i -= 2;
    }
    return S.substr(0, i);
}