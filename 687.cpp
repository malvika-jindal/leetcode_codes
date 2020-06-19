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
int ans=0;
int check(TreeNode *root)
{
    int x=0,y=0;
    if(root==NULL)
    {
        return 0;
    }
    else
    {   
        if(root->right!=NULL && root->val==root->right->val)
        {
            x+=1+check(root->right);
        }
        else 
        {
            check(root->right);
        }
         if(root->left!=NULL && root->val==root->left->val)
        {
            y+=1+check(root->left);
        }
        else
        {
            check(root->left);
        }
    }
    ans=max(ans,x+y);
    return max(x,y);
}

class Solution {
public:
    int longestUnivaluePath(TreeNode* root) {
        ans=0;
        check(root);
        return ans;
    }
};
