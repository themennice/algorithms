/* https://www.hackerrank.com/challenges/countingsort4/problem */

void countSort(vector<vector<string>> arr) {

    multimap<int,string> m;

    for(int i = 0 ; i<arr.size()/2 ; i++)
        arr[i][1] = "-";

    for(auto a : arr)
        m.insert(make_pair(stoi(a[0]),a[1]));

    for(auto itr : m)
        cout<< itr.second + " ";
}