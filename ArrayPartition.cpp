//https://leetcode.com/problems/array-partition-i/

int arrayPairSum(vector<int>& nums) {
    vector<int> map(20001,0);
    for(auto n:nums)map[n+10000]++;
    int result=0,remain=0;
    for(int x=0;x<=20000;x++)
    {

        result+=(x-10000)*((map[x]+1-remain)/2);
        remain=(remain+map[x])%2;
    }

    return result;
}