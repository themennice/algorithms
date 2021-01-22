// https://leetcode.com/problems/count-number-of-teams
// First, O(n^3). Second,  O(n^2)

int numTeams(vector<int>& rating) {
    
    // brute force works but too slow
    // int n = 0;
    // int size = rating.size();
    // for(int i = 0; i < size; i++)
    // {
    //     for(int j = i+1; j < size; j++)
    //     {
    //         for(int k = j+1; k < size; k++)
    //             {
    //                 if(rating[i] < rating[j] && rating[j] < rating[k])
    //                     n++;
    //                 if(rating[i] > rating[j] && rating[j] > rating[k])
    //                     n++;
    //             }
    //     }
    // }
    // return n;
    
    int n = 0;
    int size = rating.size();
    for(int j = 0; j < size; j++)
    {
        int leftL = 0, leftS = 0, rightL = 0, rightS = 0;
        // first for left
        for(int i = 0; i < j; i++)
        {
            if(rating[j] < rating[i])
                leftL++;
            else if(rating[j] > rating[i])
                leftS++;
        }
        // for right
        for(int k = j + 1; k < size; k++)
        {
            if(rating[j] > rating[k])
                rightS++;
            else if(rating[j] < rating[k])
                rightL++;
        }
        n += rightL*leftS + leftL*rightS;
    }
    return n;
}