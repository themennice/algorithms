/* Rotate a given array arr d steps to the left.
https://www.hackerrank.com/challenges/array-left-rotation/problem*/
#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector <int> leftRotation(vector<int> arr, int d)
{
    // Reverse the array
    for(int i = 0; i < arr.size()/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = temp;
    }

    // Reverse the first half
    for(int i = 0; i < (arr.size() - d) / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() - i - 1 - d];
        arr[arr.size() - i - 1 - d] = temp;
    }

    // O(n) time complexity
    // Reverse the second half
    for(int j = 0, i = arr.size() - d; i < arr.size()- d/2; j++, i++)
    {
        int temp = arr[i];
        arr[i] = arr[arr.size() - j - 1];
        arr[arr.size() - j - 1] = temp;
    }
    for(int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return arr;
    // Quadratic time complexity
    // for(int i = 0; i < d; i++)
    // {
    //     int temp = arr[0];
    //     //cout << temp << " is temp" << endl;
    //     arr.erase(arr.begin() + 0);
    //     arr.push_back(temp);
    // }
    // for(int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    // return arr;
}

int main()
{
    int size, rotation;
    cin >> size;
    cin >> rotation;

    vector<int> a(size);

    for (int i = 0; i < size; i++)
        cin >> a[i];
    
    leftRotation(a, rotation);

    return 0;
}