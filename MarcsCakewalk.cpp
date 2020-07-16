/*
https://www.hackerrank.com/challenges/marcs-cakewalk/problem
*/

long marcsCakewalk(vector<int> calorie) {
    sort(calorie.rbegin(),calorie.rend());
    long output = 0;
    for(int i=0; i < calorie.size(); i++){
        output += pow(2,i) * calorie[i];
    }
    return output;
}