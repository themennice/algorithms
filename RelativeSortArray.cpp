// https://leetcode.com/problems/relative-sort-array/
// O(n) time and space complexity O(N) for solution 1
// O(nlogn) time and O(n) space where n is the size of the larger array for solution 2 
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    // map<int, int> m;
    // for (auto i : arr1) m[i]++;
    // int pos = 0;
    // for (auto j : arr2) {
    //     while(m[j]-- > 0) arr1[pos++] = j;
    // }
    // for (auto it : m) {
    //     while(it.second-- > 0) arr1[pos++] = it.first;
    // }
    // return arr1;
    int key[1001], idx = 0;
    for (int i = 0; i < 1001; i++) key[i] = 1000+i;
    for (int b : B) key[b] = idx++;
    sort(A.begin(), A.end(), [key](int c, int d){
        return key[c] < key[d];
    });
    return A;
}