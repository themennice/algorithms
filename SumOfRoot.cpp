// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/
// O(n) time and space for recursion

int sumRootToLeaf(TreeNode* root, int val = 0) {
    if (!root) return 0;
    val = (val * 2 + root->val);
    return root->left == NULL && root->right == NULL ? val : sumRootToLeaf(root->left, val) + sumRootToLeaf(root->right, val);
}