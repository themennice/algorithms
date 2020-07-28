/*
https://www.hackerrank.com/challenges/strange-code/problem
*/

long strangeCounter(long t) {
    long num = 3;
    while(t > num)
    {
        t = t - num;
        num *= 2;
    }    
    return num-t+1;
}