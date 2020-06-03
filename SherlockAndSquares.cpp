/* https://www.hackerrank.com/challenges/sherlock-and-squares/problem */

int squares(int a, int b) {

    int num_squares = 0;
    int start_square = floor(sqrt(a));
    bool flag = true;

    while(flag)
    {   
        if(start_square*start_square >= a && start_square*start_square <= b)
            num_squares++;
        else if(start_square*start_square > b)
            flag = false;
        start_square++;
    }
    return num_squares;
}