//better than 80%;16ms
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
int height(TreeNode *root)
{
    if(root==NULL)
        return 0;
    else
        return 1+max(height(root->left),height(root->right));
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(root==NULL)
            return true;
        else if(abs(height(root->right)-height(root->left))<=1)
            return (isBalanced(root->left)&&isBalanced(root->right));
        else
            return false;
    }
};
