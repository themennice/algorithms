/*
https://www.hackerrank.com/challenges/beautiful-binary-string/problem
*/

int beautifulBinaryString(string b) {

    int localCount = 0;
    for(int i = 0; i < b.length(); i ++)
    {
        if(b[i] == '0' && b[i + 1] == '1' && b[i + 2] == '0')
        {
            // increase the count as it is enough to change on char
            localCount++;
            // if such subtring is found, increase i by 2 + 1, so jump to next possible substring 010
            i +=2 ;
        }
    }
    return localCount;
}