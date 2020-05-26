/* https://www.hackerrank.com/challenges/strange-advertising/problem */

int viralAdvertising(int n) {

    int cumulative = 0;
    int initial = 5;
    for(int i = 1; i <= n; i++)
    {
        cumulative += floor(initial/2);
        initial = 3 * floor(initial/2);
    }
    return cumulative;
}