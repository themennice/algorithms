// https://leetcode.com/problems/hamming-distance/
// O(1) time and space

int hammingDistance(int x, int y) {
    int count = 0;
    for(int i = 0; i < 32; i++)
    {
        if((x ^ y) & 1) //x & 1 != y & 1
            count++;
        x >>= 1;
        y >>= 1;
    }
    return count;
    // return bitset<32>(x^y).count();
}