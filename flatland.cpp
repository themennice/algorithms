/*
https://www.hackerrank.com/challenges/flatland-space-stations/problem
*/

int flatlandSpaceStations(int n, vector<int> c)
{
    int max_dist = 0;
      for(int i=0;i<n;i++)
    {
        int target = i;
        int min2=100000;
        for(int j=0;j<c.size();j++)
        {
            min2=min(min2,abs(target-c[j]));
        }
        max_dist = max(max_dist,min2);
    }
    return max_dist;
}