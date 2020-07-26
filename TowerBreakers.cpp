/*
https://www.hackerrank.com/challenges/tower-breakers-1/problem
*/

int towerBreakers(int n, int m) {
    if(m!=1)
        if(n%2==0)
            return 2;
        else
            return 1;
    else
        return 2;
}