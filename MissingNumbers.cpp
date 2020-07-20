/*
https://www.hackerrank.com/challenges/missing-numbers/problem?
*/

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {
    map<int,int> mp;
    vector<int> ans;

    for(int i=0;i<(int)brr.size();i++){
        mp[brr[i]]++;
    }  

    for(int i=0;i<(int)brr.size();i++){
        mp[arr[i]]--;
    } 
     
    for(auto i: mp){
    if(i.second>=1) ans.push_back(i.first); }
    
    return ans;

}