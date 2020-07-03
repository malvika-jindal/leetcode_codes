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
vector<vector<int>>ans;

void getsum(TreeNode* root, vector<int>v, int temp, int sum)
{
    if(root==NULL)
    {
        return;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        if(temp+root->val==sum)
        {
            v.push_back(root->val);
            ans.push_back(v);
        }
    }
    else
    {
        v.push_back(root->val);
        getsum(root->left,v,temp+root->val,sum);
        getsum(root->right,v,temp+root->val,sum);
    }
}

class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ans.clear();
        vector<int>temp;
        if(root==NULL)
        {
            return ans;
        }
        getsum(root,temp,0,sum);
        return ans;
    }
};
