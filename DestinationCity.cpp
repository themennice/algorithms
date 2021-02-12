// https://leetcode.com/problems/destination-city
// O(n^2) time complexity for two for loops and O(1) space for extra variable
// Second solution is O(n) time using hash set and O(n) for space because of it

string destCity(vector<vector<string>>& paths) {
    // bool flag = true;
    // for(int i = 0; i < paths.size(); i++)
    // {
    //     flag = true;
    //     for(int j = 0; j < paths.size(); j++)
    //     {
    //         if(paths[i][1] == paths[j][0])
    //             flag = false;
    //     }
    //     if(flag)
    //         return paths[i][1];
    // }
    // return "";
    unordered_set<string> hash;
    for(auto& e : paths)
        hash.insert(e[0]);
    for(auto& e : paths)
    {
        if(hash.find(e[1]) == hash.end())
            return e[1];
        }
    return "";
}