// https://leetcode.com/problems/arithmetic-subarrays/
// O(m*nlog(n)) where m is length of l, n is length of nums, nlog(n) is needed for sorting
// O(n) extra space for newVector copy array

vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
    vector<bool> answer;
    
    for(int i = 0; i < l.size(); i++)
    {
        vector<int> newVector(&nums[l[i]], &nums[r[i] + 1]);
        sort(newVector.begin(), newVector.end());
        int diff = newVector[1] - newVector[0];
        bool flag = true;
        for(int j = 0; j < newVector.size() - 1; j++)
        {
            if(newVector[j+1] - newVector[j] != diff)
            {
                flag = false;
                break;
            }
        }
        answer.push_back(flag);
    }
    return answer;
}