/* Grading Students Problem from 
 * https://www.hackerrank.com/challenges/grading/problem
 *
 * Given the number of grades and the grades themselves,
 * help a professor round them up.
 *
 *If the difference between the  and the next multiple of 5
 * is less than 3, round grade up to the next multiple of 5.
 *
 * If the value of grade is less than 38, no rounding occurs
 * as the result will still be a failing grade.
 *
 *
 Test case:		Expected output:

4				75
73				67
67				40
38				33
33

*/




#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> gradingStudents(vector<int> grades) {

    for(int i = 0; i < grades.size(); i++)
    {
        if(grades[i] < 38)
            continue;
        else if(5 - grades[i] % 5 < 3)
            grades[i] += 5 - grades[i] % 5;
    }
    return grades;
}

int main()
{

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(grades_count_temp);

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(grades_item_temp);

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

     for (int i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}