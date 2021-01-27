// https://leetcode.com/problems/flipping-an-image/
// O(n^2) time

vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    for (auto& row : A) {
        reverse(row.begin(), row.end());
        for (auto& v : row) v ^= 1;
    }
    return A;
}