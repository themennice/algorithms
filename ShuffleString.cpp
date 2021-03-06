// https://leetcode.com/problems/shuffle-string/submissions/
// Time complexity: O(n) where n is the length of indices array
// Space complexity: O(n) as we create a full new string

string restoreString(string s, vector<int>& indices) {
    string out = s;
    for(int i = 0; i < indices.size(); i++)
        out[indices[i]] = s[i];
    return out;
}