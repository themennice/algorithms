/*
https://www.hackerrank.com/challenges/icecream-parlor/problem
*/

vector<int> icecreamParlor(int m, vector<int> arr) {

    vector<int> cost{};
    for(int i = 0; i < arr.size() - 1; i++)
    {
        for(int j = i + 1; j < arr.size(); j++)
        {
            if(arr[i] + arr[j] == m)
                {
                    cost.push_back(i+1);
                    cost.push_back(j+1);
                }
        }
    }
    sort(cost.begin(), cost.end());
    return cost;
}