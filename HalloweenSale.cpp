/*
https://www.hackerrank.com/challenges/halloween-sale/problem

This solutions finds how many presents one could buy starting from p,
subtracting d on every present price up until the price m is hit, from when
m is subtracted from total price s. Total number of presents is the output.
Time complexity is O(n^2).
*/

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    int numPresents = 0;
    while(s >= p)
    {
        numPresents++;
        s -= p;
        p = max(p-d, m);
    }
    return numPresents;
}