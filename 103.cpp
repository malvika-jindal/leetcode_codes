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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>>ans;
        if(!root)
            return ans;
        vector<int>a;
        int count=0;
        queue<TreeNode *>q;
        q.push(root);
        int level=1,n=0;
        while(!q.empty())
        {
            a.clear();
            for(int i=0;i<level;i++)
            {
                TreeNode *temp=q.front();
                q.pop();
                if(!(count%2))
                    a.push_back(temp->val);
                else
                    a.insert(a.begin(),temp->val);
                if(temp->left)
                    q.push(temp->left),n++;
                if(temp->right)
                    q.push(temp->right),n++;
            }
            ans.push_back(a);
            level=n;
            n=0;
            count++;
        }
        return ans;
    }
};
