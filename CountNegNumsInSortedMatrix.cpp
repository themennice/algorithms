// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/
// O(mn) time, O(1) space
// second solution is O(m+n) time and O(1) space

int countNegatives(vector<vector<int>>& grid) {
    int count = 0;
    for(int i = 0; i < grid.size(); i++)
    {
        for(int j = 0; j < grid[0].size(); j++)
        {
            if(grid[i][j] < 0)
                count++;
        }
    }
    return count;
}