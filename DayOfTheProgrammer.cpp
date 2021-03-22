/* https://www.hackerrank.com/challenges/day-of-the-programmer/problem */
// O(1) space and time complexities for static variables
/* This solution calculates the 256th day of the year in Russia
   taking into account they switch from Julian to Georgian calendar in 1918 */

string dayOfProgrammer(int year) {

    if(year == 1918)
        return "26.09.1918";
    else if(((year <= 1917) && (year%4 == 0)) || ((year > 1918) && (year%400 == 0 || ((year%4 == 0) & (year%100 != 0)))))
    {
        return "12.09." + to_string(year);
    }
    else return "13.09." + to_string(year);
}
