/*
https://www.hackerrank.com/challenges/manasa-and-stones/problem

*/

vector<int> stones(int n, int a, int b) {

    set<int> ans;
    for(int i=0;i<n;i++){
        ans.insert(i*a+(n-i-1)*b);
    }
    vector <int> ret(ans.begin(), ans.end());
    return ret;
}
