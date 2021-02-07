// https://leetcode.com/problems/sum-of-unique-elements
// O(n) time to create the hash table, O(1) space to create a constant array

int sumOfUnique(vector<int>& nums) {
    int arr[101] = {0};
    int uniqueNums = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        arr[nums[i]]++;
    }
    for(int i = 0; i < 101; i++)
    {
        if(arr[i] == 1)
            uniqueNums += i;
    }
    return uniqueNums;
}