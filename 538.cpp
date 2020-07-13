class Solution {
public:
    int c;
    void helper(TreeNode* root )
    {
        if(!root) return;
        if(root->right) helper(root->right);
        
        root->val += c;
        c = root->val;
        
        if(root->left) helper(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        helper(root);
        return root;
    }
};
