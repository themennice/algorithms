// https://leetcode.com/problems/di-string-match
// O(n) time and space for single pass for loop and output vector

vector<int> diStringMatch(string S) {
    vector<int> res;
    for (int low = 0, high = S.size(), i = 0; i <= S.size(); i++)
        res.push_back(i == S.size() || S[i] == 'I' ? low++ : high--);
    return res;
}