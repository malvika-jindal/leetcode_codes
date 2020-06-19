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
bool sym(TreeNode *a,TreeNode *b)
{
    if(a==NULL && b==NULL)
        return true;
    else if(a==NULL || b==NULL)
        return false;
    else if(a->val==b->val)
        return (sym(a->left,b->right)&&sym(a->right,b->left));
    else
        return false;
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        else 
            return sym(root->left,root->right);
    }
};
