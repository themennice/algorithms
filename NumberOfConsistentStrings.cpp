// https://leetcode.com/problems/count-the-number-of-consistent-strings/submissions/
// Time complexity: O(n) since words[i].length is a constant number

int countConsistentStrings(string allowed, vector<string>& words) {
    int count = 0;
    bool flag;
    
    for(int i = 0; i < words.size(); i++)
    {
        flag = true;
        for(int j = 0; j < words[i].size(); j++)
        {
            if(allowed.find(words[i][j]) == std::string::npos)
                flag = false;
        }
        if(flag)
            count++;
    }
    return count;
}

// New approach
// Time complexity: O(n)
int countConsistentStrings(string allowed, vector<string>& words) {
    char alpha[26] = {};
    int count = words.size();
    for(int i = 0; i < allowed.size(); i++)
    {
        alpha[allowed[i] - 'a'] = 1;
    }
    for(string word: words)
    {
        for(char w: word){
            if(!alpha[w - 'a'])
            {
                count--;
                break;
            }
        }
    }
    return count;
}