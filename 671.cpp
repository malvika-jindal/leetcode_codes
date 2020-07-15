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
    int x=0,flag=0;
    int get(TreeNode *root, int value)
    {
        if(root==NULL)
        {
            return 0;
        }
        else
        {
            if(value<root->val && !flag)
            {
                x=root->val,flag++;
               // cout<<x;
            }
            else if(x>root->val && flag && root->val!=value)
            {
                 x=root->val;
                     return x;
            }
            get(root->left,value);
            get(root->right,value);
        }
        return x;
    }
    int findSecondMinimumValue(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        x=root->val;
        get(root,root->val);
        if(x==root->val)
            return -1;
        return x;
    }
};
