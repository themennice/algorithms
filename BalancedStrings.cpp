// https://leetcode.com/problems/split-a-string-in-balanced-strings/submissions/
// Time complexity: O(1) since s.length is limited by 1000

int balancedStringSplit(string s) {
    int valid = 0;
    int count_out = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'R')
            valid++;
        else
            valid--;
        if(!valid)
            count_out++;
    }
    return count_out;
}