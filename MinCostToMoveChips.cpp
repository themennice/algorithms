// https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/
// O(n) time for each chip and O(1) space for array on stack

int minCostToMoveChips(vector<int>& position) {
  int cnt[2] = {};
  for (auto p : position) ++cnt[p & 1];
  return min(cnt[0], cnt[1]);
}