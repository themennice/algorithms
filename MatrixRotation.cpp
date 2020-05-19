/*
https://www.hackerrank.com/challenges/matrix-rotation-algo/problem

Working on Matrix Rotation.

To add: run a for loop calling the define functions for each layer.
Fix the width and height
*/

// dynamicly keep track of which circle is in use

int uniI = 0;
int uniJ = 0;

void saveInto2dArray(vector<vector<int>> matrix, vector<int> &arr) {

    int rows = matrix.size();
    int columns = matrix[0].size();

    // first row
    for(int i = 0; i < columns; i++)
        arr[i] = matrix[0][i];
    // last column w/o first row entry
    for(int i = 0; i < rows - 1; i++)
        arr[i + columns] = matrix[i + 1][columns - 1];
    // last row w/o last column entry
    for(int i = columns - 2; i >= 0; i--)
        arr[i + columns + rows - 1] = matrix[rows - 1][columns - 2 - i];
    // first column without first and last row entries
    for(int i = 1; i < rows - 1; i++)
        arr[arr.size() - i] = matrix[i][0];
    // success
}

void reassemble(vector<vector<int>> &matrix, vector<int> arr)
{
    // reverse the steps from saveInto2dArray

    int rows = matrix.size();
    int columns = matrix[0].size();

    // first row
    for(int i = 0; i < columns; i++)
        matrix[0][i] = arr[i];
    // last column w/o first row entry
    for(int i = 0; i < rows - 1; i++)
        matrix[i + 1][columns - 1] = arr[i + columns];
    // last row w/o last column entry
    for(int i = columns - 2; i >= 0; i--)
        matrix[rows - 1][columns - 2 - i] = arr[i + columns + rows - 1];
    // first column without first and last row entries
    for(int i = 1; i < rows - 1; i++)
        matrix[i][0] = arr[arr.size() - i];
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

// Complete the matrixRotation function below.
void matrixRotation(vector<vector<int>> matrix, int r) {

    int rows = matrix.size();
    int columns = matrix[0].size();

    // cout << columns << " is w (columns) and h (rows) is " << rows << endl;

    // number of squares on the outer layer
    int outerSquareNumEl = (columns + rows) * 2 - 4;
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
    
    for(int i = 0; i < rows; i++)
    {
        for( int j = 0; j < columns; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }

}