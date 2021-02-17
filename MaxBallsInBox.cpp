// https://leetcode.com/problems/maximum-number-of-balls-in-a-box/
// O(n) time and O(1) space for the array

int countBalls(int lowLimit, int highLimit) {
    int count[46] = {};
    for(auto i = lowLimit; i <= highLimit; i++)
    {
        int sum = 0, n = i;
        while(n)
        {
            sum += n % 10;
            n /= 10;
        }
        count[sum]++;
    }
    return *max_element(begin(count), end(count));
}