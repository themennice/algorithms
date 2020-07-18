/*
https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
*/

int minimumAbsoluteDifference(vector<int> arr) {

    sort(arr.begin(), arr.end());
    int minDiff = arr[1] - arr[0];
    for(int i = 1; i < arr.size() - 1; i++)
    {
        if(arr[i + 1] - arr[i] < minDiff)
            minDiff = arr[i + 1] - arr[i];
    }
    return minDiff;
}
