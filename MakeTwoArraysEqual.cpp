//https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
// O(n) time, O(1) space

bool canBeEqual(vector<int>& target, vector<int>& arr) {
    int hash[1001] = {0};
    for(int i = 0; i < arr.size(); i++)
    {   hash[arr[i]]++;
        hash[target[i]]--;
    }
    for(int i = 0; i < 1001; i++)
    {
        if(hash[i] != 0)
            return false;
    }
    return true;
}