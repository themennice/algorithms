// https://leetcode.com/problems/maximum-69-number
// O(n) time, O(1) space for uncommented code. O(1) time and O(log(n)) space for commented

int maximum69Number (int num) {
    // string number = to_string(num);
    // for(int i = 0; i < number.size(); i++)
    // {
    //     if(number[i] == '6') {
    //         number[i] = '9';
    //         break;
    //     }
    // }
    // return stoi(number);
    
    int last_six_id = -1;
    int curr_id = 0;
    int temp = num;
    while(temp > 0)
    {
        if(temp % 10 == 6)
            last_six_id = curr_id;
        temp = temp / 10;
        curr_id++;
    }
    if(last_six_id == -1)
        return num;
    return num + 3*pow(10, last_six_id);
}