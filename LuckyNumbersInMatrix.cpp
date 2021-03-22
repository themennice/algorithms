// https://leetcode.com/problems/lucky-numbers-in-a-matrix
// O(n*m) time and space where n is number of columns and m is number of rows

vector<int> luckyNumbers (vector<vector<int>>& matrix) {
    vector<int> res;
    unordered_set<int> s;
    for(int i = 0; i < matrix.size(); ++i){
        int minNum = 100001; 
        for(int j = 0; j < matrix[0].size(); ++j)  minNum = min(minNum, matrix[i][j]);
        s.insert(minNum);
    }    
    for(int j = 0; j < matrix[0].size(); ++j){
        int maxNum = 0;
        for(int i = 0; i < matrix.size(); ++i) maxNum = max(maxNum, matrix[i][j]); 
        if(s.find(maxNum)!=s.end()) res.push_back(maxNum);
    }
    return res;
}