// https://leetcode.com/problems/minimum-operations-to-make-array-equal
// Time complexity: O(1)

int minOperations(int n) {
    // int min_ops = 0;
    // for(int i = 0; i < n/2; i++)
    // {
    //     min_ops += n - 2*i - 1;
    // }
    // return min_ops;
    
    int min_ops = n/2;
    cout << n/2;
    if(n % 2 == 1)
        return min_ops*(min_ops+1);
    return min_ops*min_ops;
    
}