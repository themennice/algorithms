/*https://www.hackerrank.com/challenges/3d-surface-area/problem*/

int surfaceArea(vector<vector<int>> A) {

// 1 3 4
// 2 2 3
// 1 2 4
    int max_height_front = 0, max_height_side = 0, max_top_view = A.size()*A.size();
    int tallest1 = 0, tallest2 = 0, smallest = 101;
    int tall1indexi = -1, tall1indexj = -1;
    int tall2indexi = -1, tall2indexj = -1;
    int smallindexi = -1, smallindexj = -1;
    int inside_side = 0;
    
    int surf_area = 0;

    for(int i = 0; i < A.size(); i++)
    {
        for(int j = 0; j < A[0].size(); j++)
        {
            if(A[i][j] > max_height_front)
                max_height_front = A[i][j];
            // if(A[i][j] == 0)
            //     max_top_view--;

            if(A[i][j] > tallest1)
            {
                tallest2 = tallest1;
                tallest1 = A[i][j];
                cout << "tallest1 " << tallest1 << endl;
                tall1indexi = i;
                tall1indexj = j;
            }
            else if(A[i][j] > tallest2)
            {    
                tallest2 = A[i][j];
                cout << "tallest2 " << tallest2 << endl;
                tall2indexi = i;
                tall2indexj = j;
            }

            if(A[i][j] < smallest)
            {
                smallest = A[i][j];
                cout << "smallest " << smallest << endl;
                smallindexi = i;
                smallindexj = j;
            }   
        }

        if(smallindexj > tall1indexj && smallindexj < tall2indexj)
        {
            cout << "min(tallest1, tallest2) " << min(tallest1, tallest2) << endl;
            cout << "smallest in if indexes " << smallest << endl;
            inside_side += min(tallest1, tallest2) - smallest;
            cout << "inside_side " << inside_side << endl;
        }
        surf_area += max_height_front;
        cout << "max_height_front " << max_height_front << endl;
        max_height_front = 0;
        smallest = 101;
        tallest1 = 0;
        tallest2 = 0;
    }


    for(int j = 0; j < A[0].size(); j++)
    {
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i][j] > max_height_side)
                max_height_side = A[i][j];
            // if(A[i][j] == 0)
            //     max_top_view--;

            if(A[i][j] > tallest1)
            {
                tallest2 = tallest1;
                tallest1 = A[i][j];
                cout << "tallest1 " << tallest1 << endl;
                tall1indexi = i;
                tall1indexj = j;
            }
            else if(A[i][j] > tallest2)
            {    
                tallest2 = A[i][j];
                cout << "tallest2 " << tallest2 << endl;
                tall2indexi = i;
                tall2indexj = j;
            }

            if(A[i][j] < smallest)
            {
                smallest = A[i][j];
                cout << "smallest " << smallest << endl;
                smallindexi = i;
                smallindexj = j;
            }   
        }
        if(smallindexi > tall1indexi && smallindexi < tall2indexi)
        {
            cout << "min(tallest1, tallest2) " << min(tallest1, tallest2) << endl;
            cout << "smallest in if indexes " << smallest << endl;
            inside_side += min(tallest1, tallest2) - smallest;
            cout << "inside_side " << inside_side << endl;
        }
        surf_area += max_height_side;
        cout << "max_height_side " << max_height_side << endl;
        max_height_side = 0;
        smallest = 101;
        tallest1 = 0;
        tallest2 = 0;
    }
    
    //return (surf_area + max_top_view + inside_side) * 2;
    return (surf_area + max_top_view) * 2;
}