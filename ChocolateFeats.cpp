/*
https://www.hackerrank.com/challenges/chocolate-feast/problem
*/

int chocolateFeast(int n, int c, int m) {
	// initialize return value
    int numBars = 0;
    // take the floor value of bars bought initially
    numBars = floor(n/c);
    // initialize the number of wraps
    int wraps = numBars;
    // while there are more wraps than the cost of one bar
    while(wraps >= m)
    {
    	// subtract the cost of a bar of chocolate and include the extra wrap earned
        wraps -= m - 1;
        // increase the final choco bar number
        numBars++;
    }
  	// return the final count
    return numBars;
}