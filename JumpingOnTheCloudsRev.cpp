/* https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem */

/* Simple replace the code at the link above with my implementation below */

int jumpingOnClouds(vector<int> c, int k) {

    int e = 100;
    // make sure index is not out of bounds
    int index = k % c.size();
    // set a boolean for the while loop
    bool notAtZero = true;
    while(notAtZero)
    {
        // if returned back to zero, time to exit
        if(index == 0)
            notAtZero = false;
        // if it is a thunderhead deduct an additional 2 points for a total of 3
        if(c[index] == 1)
            e -= 3;
        // deduct a point from a purple cloud
        else
            e--;
    }
    // output the final score
    cout << "The final score is " << e << endl;
    return e;
}