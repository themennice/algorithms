#include <iostream>
#include <vector>
using namespace std;

// To execute C++, please define "int main()"
int BinarySearch(vector<int> arr, int target) {
  int l = 0;
  int r = arr.size() - 1;
  int mid = arr.size()/2;
  while(l <= r)
  {
    mid = l + (r - l)/2;
    if(arr[mid] == target)
      return mid;
    if(arr[mid] > target)
      r = mid - 1;
    else if(arr[mid] < target)
      l = mid + 1;
  }
  return -1;
}


int main() {
  int count;
  int num;
  cin >> count;
  vector<int> nums;
  for(int i = 0; i < count; i++)
  {
    cin >> num;
    nums.push_back(num);
  }
  
  cout << BinarySearch(nums, 7);
  return 0;
  
}