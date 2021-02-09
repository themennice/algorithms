// https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums
// Time and Space Complexity: O(n*m) where m is column size and n is row size

vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
    vector<vector<int>> out(rowSum.size(), vector<int>(colSum.size(), 0));
    for(int i = 0; i < rowSum.size(); i++)
    {
        for(int j = 0; j < colSum.size(); j++)
        {
            out[i][j] = min(rowSum[i], colSum[j]);
            rowSum[i] -= out[i][j];
            colSum[j] -= out[i][j];
        }
    }
    return out;
}