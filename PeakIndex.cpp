// https://leetcode.com/problems/peak-index-in-a-mountain-array
// O(logn) time, O(1) space for constants

int peakIndexInMountainArray(vector<int>& arr) {
//         int max = 0;
//         int id = 0;
//         for(int i = 0; i < arr.size(); i++)
//         {
//             if(arr[i] > arr[max])
//                 max = i;
        
//         }
//         return max;
    // for (int i = 1; i + 1 < arr.size(); ++i) if (arr[i] > arr[i + 1]) return i;
    // return 0;
    
    int l = 0, r = arr.size() - 1, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (arr[mid] < arr[mid + 1])
            l = mid + 1;
        else
            r = mid;
    }
    return l;
}