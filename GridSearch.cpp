/*

https://www.hackerrank.com/challenges/the-grid-search/problem

This solution identifies if a given 2D grid exists within a bigger grid

*/

string gridSearch(vector<string> G, vector<string> P) {

    int found=0;
    // for each row in the bigger grid minus the height of smaller grid
    for(int i = 0; i <= G.size() - P.size(); i++)
    {
        // for each column in the bigger grid minus the width of smaller grid
        for(int j = 0; j <= G[0].size() - P[0].size(); j++)
        {
            int p = 0, k = i;
            // if the row of smaller grid exists in bigger, check next row
            while(G[k].substr(j, P[0].size()) == P[p].substr(0, P[0].size()))
            {
                // if we have reached a number of rows in G such that it is equal to smaller grid height, the pattern exists
                if(k - i + 1 == P.size())
                {
                    found=1;
                    break;
                }
                k++, p++;
            }
        }
    }
    return found ? "YES" : "NO";
}