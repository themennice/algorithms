/* https://www.hackerrank.com/challenges/picking-numbers/problem */



int pickingNumbers(vector<int> a) {

    // there can be at most 100 numbers, so pick a higher bound
    int frequency[101] = {0};
    int result = 0;

    // create a frequency table from the entries one by one
    for (int i = 0; i < a.size(); i++) {
        int index=a[i];
        frequency[index]++;
    }
    // find the longest subarray where the difference between any two integers is <= 1
    for (int i = 1; i <= 100; i++) {
        result = max(result, frequency[i] + frequency[i - 1]);
    }
    return result;
}