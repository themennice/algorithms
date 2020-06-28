/*
https://www.hackerrank.com/challenges/reduced-string/problem
*/

string superReducedString(string s) {
    
    int i = 0;
    while(i < s.size())
    {
        if(s[i] == s[i+1])
        {
            s.erase(s.begin()+i, s.begin()+i+2);
            i = 0;
        }
        else
            i++;
    }
    return s.empty()? "Empty String" : s;
}
// string superReducedString(string s) {

//     string result = "";
//     for(int i = 0; i < s.length(); i++)
//     {
//         if(s[i] == s[i+1])
//         {
//             i += 1;
//         }
//         else {
//             string name(1, s[i]);
//             result.append(name);
//         }
//     }
//     if(result == "")
//         return "Empty String";
//     string result1 = "";
//     for(int i = 0; i < result.length(); i++)
//     {
//         if(result[i] == result[i+1])
//         {
//             i += 1;
//             cout << result[i];
//         }
//         else {
//             string name(1, result[i]);
//             result1.append(name);
//         }
//     }
//     if(result1 == "")
//         return "Empty String";
//     return result1;

// }