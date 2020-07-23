/*
https://www.hackerrank.com/challenges/game-of-stones-1/problem
*/

string gameOfStones(int n) {
    if(n % 7 == 0 || n % 7 == 1)
        return "Second";
    return "First";
}
