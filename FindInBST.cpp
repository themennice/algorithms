// https://leetcode.com/problems/search-in-a-binary-search-tree/
// O(n) time in worst case scenario and O(1) in space as no new vars were created

TreeNode* searchBST(TreeNode* root, int val) {
//         if(root == NULL)
//             return NULL;
    
//         else if(root->val == val)
//             return root;
//         else if (root->val >= val)
//             return searchBST(root->left, val);
//         else if (root->val <= val)
//             return searchBST(root->right, val);
//         return NULL;
    
    // while(root != NULL)
    // {
    //     if(root->val == val)
    //         return root;
    //     else if (root->val >= val)
    //         root = root->left;
    //     else if (root->val <= val)
    //         root = root->right;
    // }
    // return NULL;
    
    while (root != NULL && root->val != val) {
      root = (root->val > val) ? root->left : root->right;
    }
    return root;
}