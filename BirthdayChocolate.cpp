/* https://www.hackerrank.com/challenges/the-birthday-bar/problem */

/* Birthday Chocolate Problem

   This solution counts the number of contiguous cells of size m that
   sum up to d, iterating over array s.
   Simply replace the function given at the link above with my function below.
*/

int birthday(vector<int> s, int d, int m) {

    int num_ways = 0;

    for(int i = 0; i <= s.size() - m; i++)
    {
        int sum_tuple = 0;
        for(int j = 0; j < m; j++)
        {
            sum_tuple += s[i+j];
        }
        if(sum_tuple == d)
            num_ways++;
    }
    return num_ways;
}