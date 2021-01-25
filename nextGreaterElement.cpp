// https://leetcode.com/problems/next-greater-element-ii
// O(n^2) time

vector<int> nextGreaterElements(vector<int>& nums) {
    vector <int> out;
    for(int i = 0; i < nums.size(); i++)
    {
        int nextMax = -1;
        for(int j = 1; j < nums.size(); j++)
        {
            if(nums[(j+i)%nums.size()] > nums[i])
            {
                nextMax = nums[(j+i)%nums.size()];
                break;
            }
        }
        out.push_back(nextMax);
    }
    return out;
}