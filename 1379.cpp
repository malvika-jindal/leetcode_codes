/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode *ans;
    void get(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
         if(!original)
        {
            return;
        }
        else if(original==target)
        {
            ans= cloned;
            return;
        }
        else
        {
            getTargetCopy(original->left,cloned->left,target);
            getTargetCopy(original->right,cloned->right,target);
        }
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        get(original,cloned,target);
        return ans;
    }
};
