// https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
// Time: O(n) for single pass and O(1) space for one variable

vector<int> replaceElements(vector<int>& arr) {
    int arr_size = arr.size();
    int m = -1;
    for(int i = arr_size - 1; i >= 0; i--)
    {
        int curr = arr[i];
        arr[i] = m;
        m = max(m, curr);
    }
    return arr;
}

//         int arr_size = arr.size();
//         int curr_max = arr[arr_size - 1];
//         for(int i = arr_size - 2; i >= 0; i--)
//         {
//             if(arr[i] > curr_max)
//             {
//                 curr_max = arr[i];
//             }
//             else
//                 arr[i] = arr[i + 1];
            
//         }
//         for(int i = 0; i < arr_size - 1; i++)
//         {
//             if(arr[i] != arr[i+1])
//                 arr[i] = arr[i+1];
//         }        
//         arr[arr_size - 1] = -1;
//         return arr;
//     }
    
//     for(int i = 0; i < arr.size() - 1; i++)
//     {
//         curr_max = 0;
//         for(int j = i + 1; j < arr.size(); j++)
//         {
//             if(arr[j] > curr_max)
//                 curr_max = arr[j];
//         }
//         arr[i] = curr_max;
//     }
//     arr[arr.size() - 1] = -1;
//     return arr;
// }