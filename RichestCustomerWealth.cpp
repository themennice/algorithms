// https://leetcode.com/problems/richest-customer-wealth
// Time complexity: O(m*n), where m is number of rows and n is the number of columns
// Space complexity: O(m*n), where m is number of rows and n is the number of columns

int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int max_current = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            max_current = 0;
            for(int j = 0; j < accounts[0].size(); j++)
            {
                max_current += accounts[i][j];
            }
            if(max_current > max_wealth)
                max_wealth = max_current;   
        }
        return max_wealth;
    }