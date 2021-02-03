// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square
// O(n) time for two single pass for loops
// O(1) space for variables

int countGoodRectangles(vector<vector<int>>& rectangles) {
    int maxLen = 0, num = 0;
    for(int i = 0; i < rectangles.size(); i++)
    {
        if(rectangles[i][0] < rectangles[i][1] && rectangles[i][0] > maxLen)
            maxLen = rectangles[i][0];
        if(rectangles[i][0] > rectangles[i][1] && rectangles[i][1] > maxLen)
            maxLen = rectangles[i][1];
        if(rectangles[i][0] == rectangles[i][1] && rectangles[i][1] > maxLen)
            maxLen = rectangles[i][0];
    }
    cout << maxLen;
    for(int i = 0; i < rectangles.size(); i++)
    {
        if((rectangles[i][0] >= maxLen && rectangles[i][0] < rectangles[i][1]) || (rectangles[i][1] >= maxLen && rectangles[i][0] > rectangles[i][1]))
            num++;
    }
    return num;
}