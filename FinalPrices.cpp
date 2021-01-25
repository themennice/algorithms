// https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop
// Time O(n^2)

vector<int> finalPrices(vector<int>& prices) {
    for(int i = 0; i < prices.size(); i++)
    {
        for(int j = i+1; j < prices.size(); j++)
            if(j > i && prices[j] <= prices[i])
            {
                prices[i] -= prices[j];
                break;
            }
    }
    return prices;
}