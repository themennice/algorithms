/* https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem */

/* Simply replace the given function with the function below*/

int beautifulDays(int i, int j, int k) {
    int total_beautiful_days = 0;
    for(int d = i; d <= j; d++)
    {
        int num = d, quotient = 0, reverse = 0;
        // reverse the number
        while (num != 0)
        {
            quotient = num % 10;
            // cout << quotient << " is quotient ";
            // cout << reverse << " is reverse before ";
            reverse = 10 * reverse + quotient;
            // cout << reverse << " is reverse after ";
            num = num / 10;
            // cout << num << " is num " << endl << endl;
        }
        if((reverse - d) % k == 0)
            total_beautiful_days++;
    }
    return total_beautiful_days;
}