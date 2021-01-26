// https://leetcode.com/problems/determine-if-string-halves-are-alike/submissions/
// O(n) time

bool halvesAreAlike(string s) {
    int out = 0; 
    for(int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
        if(i<s.size()/2)
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                out++;
        }
        else
        {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
                out--;
        }
    }

    if(out)
        return false;
    
    return true;
}