// https://leetcode.com/problems/self-dividing-numbers/
// Time O(n) while loop has a constant length of under 5 digits, space O(1) for one variable

vector<int> selfDividingNumbers(int left, int right) {
    vector<int> output;
    for(int i = left; i <= right; i++)
    {
        string num = to_string(i);
        bool flag = true;
        // for(int j = 0; j < num.length(); j++)
        // {
        //     if(num[j] != '0' && i % int(num[j] - '0') != 0 )
        //     {
        //         flag = false;
        //         break;
        //     }
        //     else if (num[j] == '0' )
        //     {
        //         flag = false;
        //         break;
        //     }
        // }
        int temp = i;
        while(temp > 0){
            int rem = temp % 10;
            if(rem == 0){
                flag = false;
                break;
            }
            else
                if(i % rem != 0){
                    flag = false;
                    break;
                }
            temp /= 10;
        }
        if(flag)
            output.push_back(i);
    }
    return output;
}