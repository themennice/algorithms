// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/
// Time complexity: O(n^2) where is the length of nums

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> out;
    int out_temp;
    for(int i = 0; i < nums.size(); i++)
    {
        out_temp = 0;
        for(int j = 0; j < nums.size(); j++)
        {    if(nums[i] > nums[j])
                out_temp++;
        }
        out.push_back(out_temp);
    }
    return out;
}