/*
Solution to https://www.hackerrank.com/challenges/designer-pdf-viewer/problem

I had to design a program that would calculate the are of the selection box
given the height of all 26 lower-case English letters as well as the word itself.

Simply replace the given function with the one below.
*/


int designerPdfViewer(vector<int> h, string word) {
    int len = word.length();
    int max_height = 0;
    for(int i = 0; i < len; i++)
    {
    	// 97 courresponds to 'a' in ascii, so I shifted the letter by 97 to get indeces
        if(h[word[i] - 97] > max_height)
            max_height = h[word[i] - 97];
    }
    return max_height * len;
}