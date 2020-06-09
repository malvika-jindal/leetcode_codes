//2 sum problem
//12ms; O(N) time complexity, O(N) space complexity

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)
        {
           v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int start=0,end=nums.size()-1;
        vector<int>ans;
        while(1)
        {
            if(v[start].first+v[end].first==target)
            {
                ans.push_back(v[start].second);
                ans.push_back(v[end].second);
                return ans;
            }
            else if(v[start].first+v[end].first<target)
            {
                start++;
            }
            else if(v[start].first+v[end].first>target)
            {
                end--;
            }
        }
        return ans;
    }
};
