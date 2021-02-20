// https://leetcode.com/problems/sort-array-by-parity
// Time O(n) for single for loop pass, space O(1) for in-place swaps

vector<int> sortArrayByParity(vector<int>& A) {
    // vector<int> even;
    // vector<int> odd;
    // for(int i = 0; i < A.size(); i++)
    // {
    //     if(A[i] % 2 == 0)
    //         even.push_back(A[i]);
    //     else
    //         odd.push_back(A[i]);   
    // }
    // even.insert(even.end(), odd.begin(), odd.end());
    // return even;
    
     for(int i = 0, j = 0; j < A.size(); j++)
    {
        if(A[j] % 2 == 0){
            swap(A[i], A[j]);
            i++;
        }
    }
    return A;
}