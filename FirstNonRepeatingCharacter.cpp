/*
Given a string str consisting of small English letters,
find and return the first instance of a non-repeating
character in it.
If there is no such character, return '_'.
*/

#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

char firstNonRepeatingCharacter(string str)
{
	// Initialise an array of size 26 for lower-case English characters
	int counts[26] = {};
	int len = str.length();

	// Traverse the str and increment indices of counts for each character 
	for(int i = 0; i < len; i++)
		counts[str[i] - 'a']++;

	// Traverse the string from left to right and check each character's count.
	// Return the first instance of the counter being equal to 1
	for(int i = 0; i < len; i++)
	{
		if(counts[str[i] - 'a'] == 1)
			return str[i];
	}

	// Return '_' if all characters were repeated
	return '_';	
}

int main()
{
	// Describe the program to the user
	cout << "This program will find the first non-repeating character in a given string." << endl;

	// Wait for 1.2 seconds
	usleep(1200000);

	// Get a string input from user
	cout << endl << "Please enter a string to find the first non-repeating character in:" << endl << endl;
	getline(cin, str);

	// Call the function and output the char
	cout << "The 1st such character is '" << firstNonRepeatingCharacter(str) << "'" << endl;

	return 0;
}