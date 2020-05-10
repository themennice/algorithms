/*
https://www.hackerrank.com/challenges/between-two-sets/problem

Between two sets problem.

Simply copy my implementation and paste it instead of
the provided function at the link above.

Long story short, find the number of elements between two sets that are GCDs
in the first array and LCMs in the second one.
Return the final count.
*/

int getTotalX(vector<int> a, vector<int> b) {

    int final_count = 0;
    
    // the last element of the first array is the start of the range we are looking at
    int lower_bound = a.back();
    // the first element of the second array is the end of the range we are looking at
    int upper_bound = b.front();

    // considerall elements in the range, inclusive
    for(int i = lower_bound; i <= upper_bound; i++)
    {
        // update flags each loop
        bool flagA = true;
        bool flagB = true;

        // loop through the first array to see if elements of the first array are divisors of i
        for(int j = 0; j < a.size(); j++){
            {
                if(i % a[j] != 0)
                {
                    // as soon as the first inconsistent number is found, break out of the loop, this is not the number
                    flagA = false;
                    break;
                }
            }
        }

        // no need to continue working with i if the first condition failed
        if(!flagA)
            continue;

        // consider if i is a factor of each element in the second array
        for(int j = 0; j < b.size(); j++)
        {
            {
                if(b[j] % i != 0)
                {
                    // break out of the loop if not a factor
                    flagB = false;
                    break;
                }
            }
        }

        // update the count only if both conditions are satisfied, i.e., lcm & gcd
        if(flagA && flagB)
            final_count++;
    }
    // return the final count of lcm & gcd numbers after breaking out of the big loop
    return final_count;
}