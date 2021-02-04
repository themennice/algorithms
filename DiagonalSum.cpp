// https://leetcode.com/problems/matrix-diagonal-sum/
// O(n^2) time for two for loops
// O(1) space for a variable

int diagonalSum(vector<vector<int>>& mat) {
    int sum = 0;
    int size = mat.size();
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {    if(i == j)
            {
                sum += mat[i][j];
                sum += mat[i][size - j - 1];
            }
        }
    }
    if(size % 2 == 1)
        sum -= mat[size/2][size/2];
    
    return sum;     
}