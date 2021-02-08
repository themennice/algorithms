// https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
// O(n) space, single pass for loop
// O(1) space for one variable

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
    int count = 0;
    for(int i = 0; i < startTime.size(); i++)
        count += startTime[i] <= queryTime && endTime[i] >= queryTime;
    return count;
}