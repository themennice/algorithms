// https://leetcode.com/problems/destination-city
// O(n^2) time complexity for two for loops and O(1) space for extra variable

string destCity(vector<vector<string>>& paths) {
    bool flag = true;
    for(int i = 0; i < paths.size(); i++)
    {
        flag = true;
        for(int j = 0; j < paths.size(); j++)
        {
            if(paths[i][1] == paths[j][0])
                flag = false;
        }
        if(flag)
            return paths[i][1];
    }
    return "";
}