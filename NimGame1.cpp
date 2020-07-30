/*
https://www.hackerrank.com/challenges/nim-game-1/problem
*/

// Completed nimGame function running in O(n) time
string nimGame(vector<int> pile) {

    int uxor = pile[0];
    for(int i = 1; i < pile.size(); i++)
        uxor ^= pile[i];
    return uxor != 0 ? "First" : "Second";
}