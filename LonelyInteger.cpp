/*
https://www.hackerrank.com/challenges/lonely-integer/problem
*/

int lonelyinteger(vector<int> a) {

    int arr[100]{0};

    for(int i = 0; i < a.size(); i++)
        arr[a[i]]++;
    for(int i = 0; i < 100; i++)
        {
            if(arr[i] == 1)
                return i;
        }
    return -1;
}