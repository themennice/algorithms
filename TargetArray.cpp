// https://leetcode.com/problems/create-target-array-in-the-given-order/submissions/
// Time and Space Complexity: O(N) where n is length of index array

vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int> result;
    
    for(int i = 0; i < index.size(); i++)
        result.insert(result.begin() + index[i], nums[i]);
    
    return result;
}