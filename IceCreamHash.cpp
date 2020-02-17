#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

// Complete the whatFlavors function below.
// https://www.hackerrank.com/challenges/ctci-ice-cream-parlor/problem
void whatFlavors(vector<int> cost, int money) {

    // map <int, int> umap;
    // for(int i = 0; i < cost.size(); i++)
    // {
    //     int complement = money - cost[i];
    //     if(umap[complement])
    //         cout << i << endl;
    //     else
    //         umap[cost] = complement;
    // }
    map<int, int> mymap;
    // Fill the map with costs and corresponding indeces
    for(int i = 0; i < cost.size(); i++){
        mymap[cost[i]] = i;
    }
    //iterate over the cost array and find complements
    for(int i = 0; i < cost.size(); i++){
        int complement = money - cost[i];
        if(mymap.find(complement) != mymap.end() && mymap[complement] != i){
                cout << i + 1 << " " << mymap[complement] + 1 << endl;
                return;
        }
    }
}