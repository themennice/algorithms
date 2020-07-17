/*
https://www.hackerrank.com/challenges/angry-children/problem
*/

int maxMin(int k, vector<int> arr) {

    sort(arr.begin(), arr.end());
    int unfair = INT_MAX;
    for(int i = 0; i <= arr.size() - k; i++)
    {
        int diff = arr[i + k - 1] - arr[i];
        unfair = min(unfair, diff);
    }
    return unfair;
}