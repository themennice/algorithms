//https://leetcode.com/problems/minimum-time-visiting-all-points
// Time O(n)

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int time = 0;
    for(int i = 0; i < points.size() - 1; i++)
    {
        time += max(abs(points[i][0]-points[i+1][0]), abs(points[i][1]-points[i+1][1]));
    }
    return time;
}