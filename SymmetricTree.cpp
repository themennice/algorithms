// https://leetcode.com/problems/symmetric-tree/

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (!root) return true;
        return helper(root->left, root->right);
    }
    
    bool helper(TreeNode* st1, TreeNode* st2) {
        if (!st1 && !st2) {
            return true;
        } else if (!st1 || !st2) {
            return false;
        }
        
        if (st1->val != st2->val) {
            return false;
        }
        
        return helper(st1->left,st2->right) && helper(st1->right, st2->left); 
    }
};