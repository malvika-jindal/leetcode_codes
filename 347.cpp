class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>v;
        int n=nums.size();
        vector<vector<int>>ans(n+1);
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        unordered_map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
            ans[it->second].push_back(it->first);
        for(int i=n;i>=0;i--)
        {
            if(!k)
                return v;
            if(ans[i].size())
            {
                int y=ans[i].size();
                int x=min(k,y);
                for(int j=0;j<x;j++)
                    v.push_back(ans[i][j]),k--;
            }   
        }
        return v;
    }
};
