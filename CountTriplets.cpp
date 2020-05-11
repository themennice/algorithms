/*
https://www.hackerrank.com/challenges/count-triplets-1/problem

Count triplets solution from the problem above.

Simply replace the function given with the one below and run it for correctness.
*/

long countTriplets(vector<long> arr, long r) {

    map<int,long> mp2, mp3;
    //mp2 to hold count of needed values after this one to complete 
    //2nd part of triplet
    //mp3 to hold count of needed values to complete triplet

    int val;
    int n = arr.size();
    long long res = 0;
    int i = 0;
    while(n--)
    {
        val = arr[i];
        if (mp3.count(val))        //This value completes mp3[val] triplets
            res += mp3[val];
        if (mp2.count(val))        //This value is valid as 2° part of mp2[val] triplets
            mp3[val*r] += mp2[val];
        mp2[val*r]++;            //"Push-up" this value as possible triplet start
        i++;
    }
    return res;
}