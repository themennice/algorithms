/*
https://www.hackerrank.com/challenges/divisible-sum-pairs/problem

Divisible Sum Pairs problem.
Two solutions:

*/

// Time complexity: O(n + k)
int divisibleSumPairs(int n, int k, vector<int> ar) {
    // initialize an empty dynamic array that will sort elements into their respective categories my mod
    int* bucket = new int[k];
    for(int i = 0; i < k; i++)
        bucket[i] = 0;
    
    int count = 0;
    for (int i = 0; i < ar.size(); i++) {
        int modValue = ar[i] % k;
        count += bucket[(k - modValue) % k]; // adds # of elements in complement bucket
        bucket[modValue]++;                  // saves in bucket
    }
    return count;
}

// Time complexity: O(n^2)
// int divisibleSumPairs(int n, int k, vector<int> ar) {
//     int num_pairs = 0;
//     for(int i = 0; i < ar.size(); i++)
//     {
//         for(int j = i + 1; j < ar.size(); j++)
//         {
//             if((ar[i] + ar[j]) % k == 0)
//             num_pairs++;
//         }
//     }
//     return num_pairs;
// }