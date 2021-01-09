//https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/submissions/
// Time complexity: O(n) where n is the length of the larger of the two string arrays
// Space complexity: O(n) where n is length of the two arrays

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string str1 = "", str2 = "";
    for(int i = 0; i < word1.size();i++)
    {
        str1.append(word1[i]);
    }
    for(string str : word2) {
        str2.append(str);
    }
    return str1 == str2;
}