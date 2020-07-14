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
int depth=0;
int ans;
void help(TreeNode *root, int k)
{
    if(root==NULL)
    {
        return;
    }
    else 
    {
        help(root->left,k);
        depth++;
        if(k==depth)
        {
            ans= root->val;
            return;
        }
        help(root->right,k);
    }
   // return 0;
}
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        depth=0;
         help(root,k);
        return ans;
    }
};
