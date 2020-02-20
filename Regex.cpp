/*
https://www.hackerrank.com/challenges/30-regex-patterns/problem
Output the names of users who use gmail.com as there email.
*/
#include <regex>
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    int N;
    string userInput;
    getline(cin, userInput);
    N = stoi(userInput);
    N = 6;

    vector<string> gmail;

    for (int N_itr = 0; N_itr < N; N_itr++) {

        string firstName, emailID;
        cin >> firstName;
        cin >> emailID;
        //cout << "Email ID is " << firstName << endl; 
        regex e(".+@gmail\\.com$");
        // if(emailID[emailID.length() - 9] == 'g' && emailID[emailID.length() - 10] == '@' ){
        if(regex_match(emailID,e)){
            gmail.push_back(firstName);
        }
    }
    sort(gmail.begin(), gmail.end());
    for(int i = 0; i < gmail.size(); i++)
        cout << gmail[i] << endl;
    return 0;
}
