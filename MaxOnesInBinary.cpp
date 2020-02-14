/*
Convert a given integer n into its binary equivalent
and print the maximum number of consecutive 1's in it.
Example: the binary representation of 5 is 101, so the
maximum number of consecutive 1's is 1.
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Create an array to fit 4 bytes (4*8 bits)
    int rem = 0;
    int arr[32] = {0};
    int i = 0;

    // Continue until 0 is reached
    while(n > 0)
    {
        // Take the remainder to get individual bits
        rem = n % 2;
        n /= 2;
        arr[i] = rem;
        i++;
    }

    // Set up running tallies of current and overal max
    int maxOnes = 0;
    int currmax = 0;
    // for(int i = 0; i < 31; i++)
    //     cout << arr[i] << " ";
    // Iterate through the array counting the 1's
    for(int i = 0; i < 32; i++)
    {
        if(arr[i] == 1)
            currmax++;
        else
            currmax = 0;
        if(currmax > maxOnes)
            maxOnes = currmax;
    }
    cout << maxOnes << endl;

    return 0;
}
