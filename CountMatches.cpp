// https://leetcode.com/problems/count-of-matches-in-tournament/submissions/
// Time complexity 1: O(logN)
// Time complexity 2: O(1)
// Time complexity 3: O(logN)
// Space complexity: O(1)

int numberOfMatches(int n) {
    
    // solution 1
    // int matches_total = 0;
    // while(n > 1)
    // {
    //     if(n%2 == 0)
    //     {
    //         matches_total += n/2;
    //         n /= 2;
    //     }
    //     else {
    //         matches_total += (n-1)/2;
    //         n = (n-1)/2 + 1;
    //     }
    // }
    // return matches_total;
    
    // solution 2
    // return n - 1;
    
    // solution 3
    int matches_total = 0;
    for(; n > 1; n = n/2 + n%2) matches_total += n/2;
    return matches_total;
}