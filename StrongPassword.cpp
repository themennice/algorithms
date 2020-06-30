/*
https://www.hackerrank.com/challenges/strong-password/problem

Time complexity: O(n)
*/

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    int ucase = 0 , lcase = 0 , numchar = 0 , specialchar = 0 ;
    for(int i = 0; i < password.length(); i++)
    {
        char c = password[i];
        if (isdigit(c) ) 
            numchar++ ;
        else if (c >= 65 && c <= 90) 
            ucase++ ; 
        else if (c >=97 && c <= 122) 
            lcase++ ; 
    }
    specialchar = (n - ucase - lcase - numchar) ; 
    int req = 0 ; 
    if ( ucase == 0 ) 
        req++ ;
    if ( lcase == 0 )
        req++ ;
    if (numchar == 0 ) 
        req++ ;
    if (specialchar == 0)
        req++ ; 
    return (req > (6 - n)) ? req : (6-n) ; 
}