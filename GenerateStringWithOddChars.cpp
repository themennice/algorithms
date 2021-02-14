// https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts
// O(n) time and space

string generateTheString(int n) {
    string out = "";
    bool isOdd = n % 2;
    for(int i = 0; i < n; i++)
    {
        out += 'a';
    }
    if(!isOdd)
        out[n - 1] = 'b';
    return out;
}   