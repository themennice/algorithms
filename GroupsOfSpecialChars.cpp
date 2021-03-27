// https://leetcode.com/problems/groups-of-special-equivalent-strings/
// O(n*mlogm) time where n is length of A, m is length of word in A

int numSpecialEquivGroups(vector<string>& A) {
    unordered_set<string> s;
    for (string word : A) {
        string odd, even;
        for (int i = 0; i < word.size (); ++i) {
            if (i % 2)
                even  += word[i];
            else
                odd += word[i];
        }
        sort (even.begin (), even.end());
        sort (odd.begin(), odd.end());
        s.insert(even +  odd);
    }
    return s.size ();
}