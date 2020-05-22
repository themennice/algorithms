/* https://www.hackerrank.com/challenges/magic-square-forming/problem */

/* This solution calculates the minimum cost of creating a magic square
   where all diagonal, rows and columns sum up to a magic number. Hint: 15 */

int formingMagicSquare(vector<vector<int>> s) {

    int magic[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
    };

    int min_cost = 100;
    for (int m = 0; m < 8; m++) {
        int cost = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cost += abs( s[i][j] - magic[m][i][j] );
        }
        if (cost < min_cost)
            min_cost = cost;
    }
    return min_cost;
}