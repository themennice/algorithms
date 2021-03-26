// https://leetcode.com/problems/maximum-units-on-a-truck/
// O(nlogn) time and O(1) space

int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
    sort(begin(boxTypes), end(boxTypes), [](const auto&l,const auto&r){return r[1] < l[1];});
    int ans=0;
    for(auto box: boxTypes){
        int x=min(box[0],truckSize);
        ans+=(x*box[1]);
        truckSize-=x;
        if(!truckSize) break;
    }
    return ans;
}