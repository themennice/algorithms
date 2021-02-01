// https://leetcode.com/problems/maximum-number-of-coins-you-can-get
// Time: O(n) single pass
// Space: O(1) 1 new variable

int maxCoins(vector<int>& piles) {
    int max = 0;
    sort(piles.rbegin(), piles.rend());
    for(int i = 1; i < piles.size()*2/3; i+=2)
    {
        max += piles[i];
    }
    return max;
}