/************************************
 * Definition for a binary tree node.
 * struct treeNode {
 *     int value;
 *     treeNode *left;
 *     treeNode *right;
 *     treeNode(int x) : value(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(treeNode* root) {
        if (root == NULL)
            return 0;
        int rightDepth = maxDepth(root->left);
        int leftDepth = maxDepth(root->right);
        
        if (rightDepth > leftDepth)
            return rightDepth + 1;
        else
            return leftDepth + 1;
    };
};
