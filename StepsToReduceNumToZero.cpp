/*
Leetcode 1342. Number of Steps to Reduce a Number to Zero
Given a non-negative integer num, return the number of steps
to reduce it to zero. If the current number is even, you have
to divide it by 2, otherwise, you have to subtract 1 from it.
*/

#include <iostream>

int numberOfSteps (int num) {
    int counter = 0;
    while(num != 0)
    {
        if(num % 2 == 0)
            num /= 2;
        else
            num -= 1;
            counter++;
    }
    return counter;
}

int main()
{
    std::cout << "Please input a number and find out how many steps it will take to reduce it to zero: " << std::endl;
    int num;
    std::cin >> num;

    std::cout << numberOfSteps(num) << std::endl;

    return 0;
}