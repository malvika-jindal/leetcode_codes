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
    unordered_map<int,int>m;
    unordered_map<int,int>::iterator it;
    int count;
    void check(TreeNode *root)
    {
        if(!root)
        {
            return;
        }
        else if(!(root->left) && !(root->right))
        {
           int flag=0;
            m[root->val]++;
           for(it=m.begin();it!=m.end();it++)
           {
               if((it->second)%2==1 && !(flag))
               {
                   flag=1;
               }
               else if((it->second)%2==1 && (flag))
               {
                   flag=2;
                   break;
               }
           }
            if(flag!=2)
                count++;
            m[root->val]--;
        }
        else
        {
            m[root->val]++;
            check(root->left);
            check(root->right);
            m[root->val]--;
        }
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        m.clear();
        count=0;
        check(root);
        return count;
    }
};
