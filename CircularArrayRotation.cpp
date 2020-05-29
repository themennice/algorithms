/* https://www.hackerrank.com/challenges/circular-array-rotation/problem */

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    vector<int> output;
    int n = a.size();
    for(int i = 0; i<queries.size(); i++)
    {
        if(n + queries[i] - k % n >= n)
        {
            output.push_back(a[queries[i] - k % n ]);
        }
        else
            output.push_back(a[n - k % n + queries[i]]);
    }
    return output;
}