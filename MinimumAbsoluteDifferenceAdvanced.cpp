// https://leetcode.com/problems/minimum-absolute-difference
// O(nlogn) time for sorting and O(n) space for the output vector

vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        int min_diff =  INT_MAX;
        for(int i = 0; i < arr.size() - 1; i++)
            min_diff = min(arr[i+1] - arr[i], min_diff);
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i+1] - arr[i] == min_diff)
                res.push_back({arr[i], arr[i+1]});
        }
        return res;
    }