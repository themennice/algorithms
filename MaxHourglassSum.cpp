#include <iostream>
#include <vector>

using namespace std;

int maxHourGlassSum(vector<vector<int> > arr)
{
    int maxHSum = -100000;

    for(int i = 1; i < 5; i++)
    {
        for(int j = 1; j < 5; j++)
        {
            int localHSum = 0;
            localHSum += arr[i][j];
            localHSum += arr[i-1][j];
            localHSum += arr[i+1][j];
            localHSum += arr[i-1][j-1];
            localHSum += arr[i-1][j+1];
            localHSum += arr[i+1][j-1];
            localHSum += arr[i+1][j+1];
            if(localHSum > maxHSum)
                maxHSum = localHSum;
        }
    }
    cout << maxHSum << endl;
    return maxHSum;
}

int main()
{
    vector<vector<int> > arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    maxHourGlassSum(arr);
    return 0;
}
