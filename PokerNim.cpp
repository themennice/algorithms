/*
https://www.hackerrank.com/challenges/poker-nim-1/problem
*/

string pokerNim(int k, vector<int> c) {
    int ans = 0;
    for(int i = 0; i < c.size(); i++)
        {
            ans ^= c[i];
        }
    if(ans!=0)
        return "First";
    else
        return "Second";
}