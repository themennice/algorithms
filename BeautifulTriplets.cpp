/*

https://www.hackerrank.com/challenges/beautiful-triplets/problem

Simply replace the code at the link above with my function code

*/

int beautifulTriplets(int d, vector<int> arr) {

    int ans=0;
    for(int i=0; i<arr.size(); i++){
        auto it=find(arr.begin(),arr.end(),arr[i]+d);
        if(it!=arr.end()){
            auto kit=find(arr.begin(),arr.end(),arr[i]+2*d);
            if(kit!=arr.end()) ans++;
        }
    }
    return ans;
}