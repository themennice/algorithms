// https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
// O(n) time for single pass for loop and O(1) for static space

int minAddToMakeValid(string S) {
    int count = 0;
    int temp = 0;
    for(int i = 0; i < S.length(); i++)
    {
        if(S[i] == '(')
            count++;
        else if(S[i] == ')')
            count--;
        if(S[i] == ')' && count == -1)
        {
            temp++;
            count = 0;
        }  
    }
    return abs(count) + temp;
}