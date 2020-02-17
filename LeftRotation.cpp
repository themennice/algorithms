/* Rotate a given array arr d steps to the left
https://www.hackerrank.com/challenges/array-left-rotation/problem*/
vector <int> leftRotation(vector<int> arr, int d)
{
    for(int i = 0; i < d; i++)
    {
        int temp = arr[0];
        //cout << temp << " is temp" << endl;
        arr.erase(arr.begin() + 0);
        arr.push_back(temp);
    }
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return arr;
}