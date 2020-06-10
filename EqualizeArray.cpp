/*
https://www.hackerrank.com/challenges/equality-in-a-array/problem

Find the smallest number of deletions so that the array is uniform (i.e., all numbers are the same)
*/

int equalizeArray(vector<int> arr) {

    int max = 0;
    vector<int> umap(100);
    for(int i = 0; i < arr.size(); i++)
        umap[arr[i]]++;
    for(int i = 0; i < umap.size(); i++)
    {
        if(umap[i] > max)
            max = umap[i];
    }
    return arr.size() - max;
}