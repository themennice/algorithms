// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/
// Time complexity is O(n)
// Space complexity is O(1) as we only created a static number of vars

int maxDepth(string s) {
    int max_depth, curr_depth = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
            curr_depth++;
        else if(s[i] == ')')
            curr_depth--;
        if(max_depth < curr_depth)
            max_depth = curr_depth;
    }
    return max_depth;
}