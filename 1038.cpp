/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
   int c=0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root)
        {
            bstToGst(root->right);
            c+=root->val;
            root->val=c;
            bstToGst(root->left);
        }
        return root;
    }
};
