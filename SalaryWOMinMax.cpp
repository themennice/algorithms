// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary
// O(n) time and O(1) space

double average(vector<int>& salary) {
    double res = 0;
    double max = 0;
    double min = INT_MAX;
    for(auto unit : salary)
    {
        res += unit;
        if(unit > max)
            max = unit;
        if(unit < min)
            min = unit;
    }
    return (res - max - min)/(salary.size() - 2);
    
    // return (accumulate(begin(salary), end(salary), 0.) - *min_element(begin(salary), end(salary)) 
    // - *max_element(begin(salary), end(salary))) / (salary.size() - 2);
}