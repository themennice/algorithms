// https://leetcode.com/problems/remove-outermost-parentheses/
// Time complexity O(n), space O(n) where n is the length of the string S

string removeOuterParentheses(string S) {
      string out;
      int opened = 0;
      for (char ch : S) {
          if (ch == '(' && opened++ > 0)
              out += ch;
          if (ch == ')' && opened-- > 1) 
              out += ch;
      }
      return out;
  }
