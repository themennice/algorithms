/*

https://www.hackerrank.com/challenges/taum-and-bday/problem

One line solution.

*/

long taumBday(long b, long w, long bc, long wc, long z) {

    return b*min(bc,wc+z) + w*min(wc, bc+z);
}