// https://leetcode.com/problems/find-and-replace-pattern

vector<string> findAndReplacePattern(vector<string> words, string p) {
//         vector<string> res;
//         p = F(p);
//         for (string w : words) if (F(w) == p) res.push_back(w);
//             return res;
//         }

//     string F(string w) {
//         unordered_map<char, int> m;
//         for (char c : w) {
//             if (!m.count(c)) m[c] = m.size();
//             // cout << m[c] << " ";
//         }
//         // cout << endl;
      
//         for (int i = 0; i < w.length(); i++) {
//             w[i] = 'a' + m[w[i]];
//             // cout << w[i] << " ";
//         }
//         // cout << endl;
//         return w;
//     }
  
  string toPattern(string word) {
      map<char, char> M;
      int curr = 97;
      for(char& c: word) if(M.count(c) == 0) M[c] = (char) curr++;
      for(int i = 0; i < word.length(); i++) word[i] = M[word[i]];
      return word;
    }

    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      string p = toPattern(pattern);
      vector<string> res;
      for(string& w: words) if(toPattern(w).compare(p) == 0) res.push_back(w);
      return res;
}