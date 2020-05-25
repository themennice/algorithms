/* https://www.hackerrank.com/challenges/angry-professor/problem? */

string angryProfessor(int k, vector<int> a) {

    int cancel = 0;
    // iterate through the array and find the number of values that are <= 0
    // this will be the number of people arriving on time
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] <= 0)
            cancel++;
    }
    // if the number of people arriving on time is smaller than the required attendance, cancel the class
    return cancel < k ? "YES":"NO";
}