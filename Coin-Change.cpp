/*
https://www.hackerrank.com/challenges/coin-change/problem
*/

long getWays(int n, vector<long> c) {
    vector<long> ways(n+1) ; 
    ways[0] = 1;  
    for (long denom = 0; denom < c.size(); denom++ ) {
        for (int i = 1 ; i <= n ; ++i) {
            if  ( c[denom] <= i ) {
                ways[i] += ways[i-c[denom]] ; 
            }
        }
    }
    return ways[n] ;
}