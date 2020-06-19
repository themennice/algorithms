/*
https://www.hackerrank.com/challenges/lisa-workbook/
*/

int workbook(int n, int k, vector<int> arr) {

    int i,j,p=1,q=1,c=1,sp = 0;
    for(i = 0 ; i<n ;){
    if(p==q)
        sp++; 
    if(q%k==0 || q==arr[i])
        p++;
    if(q==arr[i])
    {
        q=0;
        i++;
        c++;
    }
    q++;
}
return sp;  
}