//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix
// O(n^2) time and O(n) space

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int count;
    vector<int> count_arr;
    vector<int> res;
    int id = 0;
    for(int i = 0; i < mat.size(); i++)
    {
        count = 0;
        for(int j = 0; j < mat[0].size(); j++)
            count += mat[i][j];
        count_arr.push_back(count);
    }
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < count_arr.size(); j++)
        {
        if(count_arr[j] < count_arr[id])
            id = j;
        }
        count_arr[id] = 1001;
        res.push_back(id);
    }
    return res;
}