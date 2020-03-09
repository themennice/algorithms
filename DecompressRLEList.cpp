/*
Leetcode 1313. Decompress Run-Length Encoded List
We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [a, b] = [nums[2*i], nums[2*i+1]] (with i >= 0).
For each such pair, there are a elements with value b in the decompressed list.
Return the decompressed list.
*/

#include <iostream>
#include <vector>

std::vector<int> decompressRLElist(std::vector<int>& nums)
{
	std::vector <int> output;

	for(int i = 0; i < nums.size(); i += 2)
	{
	    int a = nums[i];
	    int b = nums[i+1];
	    for(int j = 0; j < a; j++)
	        output.push_back(b);
	}
	nums = output;
	return nums;
 }

 int main()
 {
 	std::vector <int> nums;
 	for(int i = 0; i < 4; i++)
 	{
 		nums.push_back(i + 1);
 	}
 	decompressRLElist(nums);

 	for(int i = 0; i < nums.size(); i++)
 	{
 		std::cout << nums[i] << " ";
 	}
 	std::cout << std::endl;
 	return 0;
 }