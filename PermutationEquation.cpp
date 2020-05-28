/* https://www.hackerrank.com/challenges/permutation-equation/problem */

vector<int> permutationEquation(vector<int> p) {

    vector <int> reverse(p.size());
    for(int i = 0; i<=p.size(); i++)
        reverse[p[p[i - 1] - 1] - 1] = i;
    return reverse;
}