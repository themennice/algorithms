#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {

    int arr[26] = {0};
    int counter = 0;

    for(int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a']++;
    }
    int n = sizeof(arr)/sizeof(arr[0]); 
    sort(arr, arr+n, greater<int>());
    for(int i = 0; i < 22; i++)
    {
        if(arr[i+2] == 0)
        break;
        if(arr[i] - arr[i + 1] > 1)
         counter+= abs(arr[i] - arr[i + 1]);
        if(arr[i] - arr[i + 1] > 1 || arr[i] != arr[i + 1] || (arr[i] == arr[i+1] && arr[i+2] == arr[i+3] && arr[i+1] != arr[i+2]) || arr[i+2] != arr[i+3])
            counter++;
    }
    for(int i = 0; i < 26; i++)
    {
        cout << arr[i];
    }
    cout << endl << counter << endl;
    
    if(counter > 1)
        return "NO";
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
