/*
Solution to the following problem:
https://www.hackerrank.com/challenges/apple-and-orange/problem

This solution counts the number of apples and oranges that fall
withing the predefined area of the house and prints these numbers.

Simply replace the given function with the one below and run it.
*/

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int numApples = 0, numOranges = 0;
    for(int i = 0; i < apples.size(); i++)
    {
        apples[i] += a;
        if(apples[i] >= s && apples[i] <= t)
            numApples++;
    }
    for(int i = 0; i < oranges.size(); i++)
    {
        oranges[i] += b;
        if(oranges[i] >= s && oranges[i] <= t)
            numOranges++;
    }
    cout << numApples << endl << numOranges << endl;
    return;
}