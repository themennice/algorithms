// https://leetcode.com/problems/unique-morse-code-words
// Complexity O(n) as the first for loop can be of length n, the words are O(1) up to 100 chars in length, so only O(n)

int uniqueMorseRepresentations(vector<string>& words) {
    vector<string> alph = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> str;
    for(string w : words)
    {
        string s = "";
        for(char c : w)
        {
            s += alph[c - 'a'];
        }
        str.insert(s);
    }
    return str.size();
}