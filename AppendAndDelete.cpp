/*
https://www.hackerrank.com/challenges/append-and-delete/problem

Replace the given code with the code below
*/

string appendAndDelete(string s, string t, int k) {

    int slen = s.length();
    int tlen = t.length();
    int max = slen > tlen ? slen : tlen;

    // if we have the option to delete all characters and create a new one
    if(k >= slen + tlen)
        return "Yes";
    else {
        for(int i = 0; i < max; i++) {
            if(t[i] != s[i]) {
                k -= slen - i; 
                k -= tlen - i;
                break;
            }
        }    
        if(k % 2 == 0 && k >=0)
            return "Yes";
        else
            return "No";
    }
}