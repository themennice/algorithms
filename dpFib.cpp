#include <iostream>
#include <vector>

using namespace std;

int fib(int num)
{
	vector<int> arr(num+1, 0);
	arr[0] = 0;
	arr[1] = 1;
	for(int i = 2; i <= num; i++)
		arr[i] = arr[i-1] + arr[i-2];
	return arr[num];
}

int main(){
	int number;
	cout << "Enter fibonacci number: " << endl;
	cin >> number;

	cout << fib(number);
}