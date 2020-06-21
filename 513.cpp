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
int ans;
int level=-1;
void check(TreeNode *root, int depth)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(level<depth)
        {
            level++;
            ans=root->val;
        }
        check(root->left,depth+1);
        check(root->right,depth+1);
    }
}
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        level=-1;
        ans=0;
        check(root,0);
        return ans;
    }
};
