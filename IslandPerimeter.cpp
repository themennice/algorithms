// https://leetcode.com/problems/island-perimeter/
// O(n^2) time for nested loop and O(1) space

int islandPerimeter(vector<vector<int>>& grid) {
    int count=0, neighbor=0;
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0; j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count ++;
                    if(i!=0 && grid[i-1][j] == 1) neighbor++;
                    if(j!=0 && grid[i][j-1] == 1) neighbor++;
                }
            }
    }
    return 4*count-neighbor*2;
}