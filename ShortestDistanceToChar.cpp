// https://leetcode.com/problems/shortest-distance-to-a-character
// O(n) time and space complexities

vector<int> shortestToChar(string s, char c) {
    int n = s.size();
    int id = -10001;
    vector<int> res(n, n);
    
    for (int i = 0; i < n; i++) {
        if (s[i] == c) id = i;
        res[i] = i - id;
    }
    
    for (int i = id - 1; i >= 0; i--) {
        if (s[i] == c)  id = i;
        res[i] = min(res[i], id - i);
    }
    
    return res;
}