// https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/
// O(nlogn) time for sorting and O(1) for space for the extra variable

bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int diff = arr[1] - arr[0];
    for(int i = 1; i < arr.size() - 1; i++)
    {
        if(arr[i+1] != arr[i] + diff)
            return false;
    }
    return true;
}