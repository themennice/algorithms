// https://leetcode.com/problems/xor-operation-in-an-array/submissions/
// time and space complexity: O(n)

int xorOperation(int n, int start) {
    vector<int> nums;
    int out = start;
    for(int i = 0; i < n; i++)
    {
        nums.push_back(start + 2*i);
        if(i>0)
            out ^= nums[i];
    }
    return out;
}