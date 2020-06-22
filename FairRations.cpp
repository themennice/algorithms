/*
https://www.hackerrank.com/challenges/fair-rations/problem
*/

int fairRations(vector<int> B) {

    int n = B.size();
    int a[n];
    int ans=0;
    for(int i=0;i<n-1;i++){
        if(B[i]%2!=0){
            B[i]++;
            B[i+1]++;
            ans+=2;
        }
    }
    if(B[n-1]%2==0) return ans;
    // case for NO
    else return -1;
}