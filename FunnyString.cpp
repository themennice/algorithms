/*
https://www.hackerrank.com/challenges/funny-string/problem
*/

string funnyString(string s) {
    int length = s.length();

    for(int i=1;i<length;i++){

        if(abs(s[i]-s[i-1]) != abs(s[length-i-1]-s[length-i]))
            return "Not Funny";
    }
    return "Funny";
}