#include <iostream>
#include <string>

using namespace std;

int substrCount(int length, string s)
{
	int counter = 0;
	for(int i = 0; i < length; i++)
	{
		int offset = 1;

		// All characters except the middle one are the same, e.g. aadaa
		while(i - offset >= 0 && i + offset < length && s[i - offset] == s[i - 1] && s[i + offset] == s[i - 1])
		{
			counter++;
			offset++;
		}
		int repeating = 0;
		// if characters repeat; repeats will be updated to 0 every loop
		while(i + 1 < length && s[i] == s[i+1])
		{
			i++;
			repeating++;
		}
		// Noticed a pattern in 4 + 3 + 2 + 1 = 10, same as n*(n+1)/2 = 4*5/2 = 10
		counter += repeating * (repeating + 1) / 2;

	}
	return counter + length;
}

int main()
{
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	
	string s;
    getline(cin, s);

    long result = substrCount(n, s);

    cout << result << "\n";
}