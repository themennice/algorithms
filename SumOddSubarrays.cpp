// https://leetcode.com/problems/sum-of-all-odd-length-subarrays
// O(n) time, O(1) space

int sumOddLengthSubarrays(vector<int>& arr) {
    int s = 0;
    
    for(int i = 0; i < arr.size(); i++){
        s += (((i + 1) * (arr.size() - i) + 1) /2 ) * arr[i];
        
    }
    return s;
}