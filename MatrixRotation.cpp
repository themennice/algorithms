/*
https://www.hackerrank.com/challenges/matrix-rotation-algo/problem

Working on Matrix Rotation.

To add: run a for loop calling the define functions for each layer.
Fix the width and height
*/

void saveInto2dArray(vector<vector<int>> matrix, vector<int> &arr) {

    int width = matrix.size();
    int height = matrix[0].size();

    // first row
    for(int i = 0; i < width; i++)
        arr[i] = matrix[0][i];
    // last column w/o first row entry
    for(int i = 0; i < height - 1; i++)
        arr[i + width] = matrix[i + 1][height - 1];
    // last row w/o last column entry
    for(int i = width - 2; i >= 0; i--)
        arr[i + width + height - 1] = matrix[height - 1][width - 2 - i];
    // first column without first and last row entries
    for(int i = 1; i < height - 1; i++)
        arr[arr.size() - i] = matrix[i][0];
    // success
}

void rotate2dArray(vector <int> &arr, int r)
{
    // cout << "I am in rotate \n";
    int temp;
    vector <int> tempArray(r);
    // store the first r elements in a temp array
    for(int i = 0; i < tempArray.size(); i++)
        tempArray[i] = arr[i];
    // shift the rest of array by r
    for(int i = 0; i < arr.size() - r; i++)
        arr[i] = arr[i + r];
    // store temp array back
    for(int i = 0; i < tempArray.size(); i++)
        arr[i + arr.size() - r] = tempArray[i];
    //success
}

void reassemble(vector<vector<int>> &matrix, vector<int> arr)
{
    // reverse the steps from saveInto2dArray

    int width = matrix.size();
    int height = matrix[0].size();

    // first row
    for(int i = 0; i < width; i++)
        matrix[0][i] = arr[i];
    // last column w/o first row entry
    for(int i = 0; i < height - 1; i++)
        matrix[i + 1][height - 1] = arr[i + width];
    // last row w/o last column entry
    for(int i = width - 2; i >= 0; i--)
        matrix[height - 1][width - 2 - i] = arr[i + width + height - 1];
    // first column without first and last row entries
    for(int i = 1; i < height - 1; i++)
        matrix[i][0] = arr[arr.size() - i];
    // success
}

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) {
    
    int width = matrix.size();
    int height = matrix[0].size();

    // number of squares on the outer layer
    int outerSquareNumEl = (height+width) * 2 - 4;
    // use modular arithmetic to avoid going in circules and wasting CPU time
    r = r % outerSquareNumEl;
    
    vector<int> arr(outerSquareNumEl);
    saveInto2dArray(matrix, arr);

    // for(int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    // cout << endl;

    rotate2dArray(arr, r);

    // for(int i = 0; i < arr.size(); i++)
    //     cout << arr[i] << " ";
    // cout << endl << arr.size() << endl;

    reassemble(matrix, arr);
    
    for(int i = 0; i < width; i++)
    {
        for( int j = 0; j < height; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

}