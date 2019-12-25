#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

/*
Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written.

Do the above modifications to the input array in place, do not return anything from your function.

The solution should be in O(1) space complexity
*/

void duplicateZeros(vector<int>& arr) {
  cout << "Initial array: ";
  cout << "[";
  for (int j = 0; j < arr.size()-1; j++)
    cout << arr[j] << ",";
  cout << arr[arr.size()] << "]";
  cout << endl;

  for (int i = 0; i < arr.size()-1; i++){
    if (arr[i] == 0){
      for (int j = arr.size()-1; j > i + 1; j--){
        arr[j] = arr[j-1];
      }
      arr[i+1] = 0;
      i++;
    }
  }
  cout << "Final array:   ";
  cout << "[";
  for (int i = 0; i < arr.size()-1; i++)
    cout << arr[i] << ",";
  cout << arr[arr.size()-1];
  cout << "]";
  cout << endl;
}


/*
Given an array nums of integers, return how many of them contain an even number of digits.
*/

int helper (int x){
  //cout << x << endl;
  return x/10;
}

int findNumbers(vector<int>& nums) {
  int even_counter = 0;
    for (int i = 0; i < nums.size(); i++){
      int counter = 0;
      int number = nums[i];
      while (number >= 1) {
        number = helper(number);
        counter++;
      }
      if (counter % 2 == 0) {
        even_counter++;
      }
    }
return even_counter;
}

int main() {
  vector<int> vect;  
  vect.push_back(101);
  vect.push_back(221);
  vect.push_back(2021); 
  vect.push_back(3012); 

  cout << "There are " << findNumbers(vect) << " numbers containing an even number of digits in the given array." << endl;

  vector<int> arr;
  int arrays[] = {1,0,2,3,0,4,5,0};
  for (int i = 0; i < sizeof(arrays)/sizeof(arrays[0]); i++)
  {
    arr.push_back(arrays[i]);
  }
  cout << endl;
  
  duplicateZeros(arr);
}
