// https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
// O(n) time for single pass for loop
// O(1) space to keep track of current and previous max

int maxProduct(vector<int>& nums) {
    // int curr_max = 0;
    // int prev_max = 0;
    // int id = 0;
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] >= curr_max)
    //     {
    //         curr_max = nums[i];
    //         id = i;
    //     }
    // }
    // for(int i = 0; i < nums.size(); i++)
    // {
    //     if(nums[i] >= prev_max && i != id)
    //     {
    //         prev_max = nums[i];
    //     }
    // }
    // return (prev_max - 1)*(curr_max - 1);
    
    int curr_max = 0;
    int prev_max = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] >= curr_max)
        {
            prev_max = curr_max;
            curr_max = nums[i];
        }
        else if(nums[i] > prev_max)
            prev_max = nums[i];
    }
    return (prev_max - 1)*(curr_max - 1);
}