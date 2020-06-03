/* https://www.hackerrank.com/challenges/cut-the-sticks/problem */

vector<int> cutTheSticks(vector<int> arr) {
    int sizeArr = arr.size();
    vector<int> output{sizeArr};

    sort(arr.begin(),arr.end());
    
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            output.push_back(arr.size()-(i + 1));
        }
    }
    return output;
}