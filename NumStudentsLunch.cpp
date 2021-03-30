// https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/
// O(n) time and O(1) space complexity

int countStudents(vector<int>& students, vector<int>& sandwiches) {
    int arr[] = {0, 0};
    for (int i = 0; i < students.size(); i++)
        arr[students[i]] += 1;
    int j = 0;
    while (j < sandwiches.size()){
        if (arr[sandwiches[j]] > 0)
            arr[sandwiches[j]] -= 1;
        else
            break;
        j += 1;
    }
    return sandwiches.size() - j;
}