// https://leetcode.com/problems/robot-return-to-origin
// O(n) time and O(1) space

bool judgeCircle(string moves) {
    int arr[4] = {0};
    for(auto c : moves)
    {
        if(c == 'U')
            arr[0]++;
        else if(c == 'D')
            arr[1]++;
        else if(c == 'L')
            arr[2]++;
        else if(c == 'R')
            arr[3]++;
    }
    if(arr[0] == arr[1] && arr[2] == arr[3])
        return true;
    return false;
    
    // unordered_map<char, int> umap;
    // for(char c : moves)
    //     umap[c]++;
    // if(umap['U'] == umap['D'] && umap['L'] == umap['R'])
    //     return true;
    // return false;
}