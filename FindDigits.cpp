/* https://www.hackerrank.com/challenges/find-digits/problem */

int findDigits(int n) {
    int r = n;
    int d = 0;
    while(r > 0)
    {
        if(r % 10 != 0 && n % (r % 10) == 0)
            d++;
        r /= 10;
        cout << n << " ";
    }
    return d;
}