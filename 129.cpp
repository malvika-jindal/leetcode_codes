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
    
int sum=0;
void number(TreeNode *root, int num)
{
    if(!root)
    {
        return;
    }
    else if(!root->left && !root->right)
    {
        sum+=(num*10+root->val);
        return;
    }
    else
    {
        number(root->left, num*10+root->val),
        number(root->right,num*10+root->val);
    }
}
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sum=0;
        number(root,0);
        return sum;
    }
};
