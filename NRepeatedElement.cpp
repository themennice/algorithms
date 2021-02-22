// https://leetcode.com/problems/n-repeated-element-in-size-2n-array/
// O(n) time and space

int repeatedNTimes(vector<int>& A) {
    unordered_map<int, int> umap;
    for(int i = 0; i < A.size(); i++)
    {
        umap[A[i]]++;
        if(umap[A[i]] > 1)
            return A[i];
    }
    return 0;
}