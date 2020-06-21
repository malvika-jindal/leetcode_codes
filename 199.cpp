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
int level=-1;
vector<int>v;

void print(TreeNode *root, int depth)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        if(level<depth)
        {
            v.push_back(root->val);
            level++;
        }
        print(root->right,depth+1);
        print(root->left,depth+1);
    }
}

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        level=-1;
        v.clear();
        print(root,0);
        return v;
    }
};
