// https://leetcode.com/problems/intersection-of-two-arrays-ii/
// O(n) time and space complexities

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    // sort(nums1.begin(), nums1.end());
    // sort(nums2.begin(), nums2.end());
    // nums1.erase(set_intersection(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums1.begin()), nums1.end());
    // return nums1;

    unordered_map<int, int> ctr;
    for (int i : nums1)
        ctr[i]++;
    vector<int> out;
    for (int i : nums2)
        if (ctr[i]-- > 0)
            out.push_back(i);
    return out;
}