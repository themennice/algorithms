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