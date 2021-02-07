// https://leetcode.com/problems/sum-of-unique-elements
// O(n) time to create the hash table, O(1) space to create a constant array

int sumOfUnique(vector<int>& nums) {
    // int arr[101] = {0};
    // int uniqueNums = 0;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     arr[nums[i]]++;
    // }
    // for(int i = 0; i < 101; i++)
    // {
    //     if(arr[i] == 1)
    //         uniqueNums += i;
    // }
    // return uniqueNums;
    unordered_map<int, int> umap;
    for(auto i : nums)
        umap[i]++;
    int res = 0;
    for(auto it : umap)
    {
        if(it.second == 1)
            res += it.first;
    }
    return res;
}