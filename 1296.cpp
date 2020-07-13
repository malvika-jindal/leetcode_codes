class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(nums.begin(),nums.end());
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
            m[nums[i]]++;
        for(int i=0;i<n;i++)
        {
            int x=m[nums[i]];
            if(m[nums[i]])
            {
                for(int j=nums[i];j<k+nums[i];j++)
                {
                    if(m[j]>=x)
                        m[j]-=x;
                    else
                        return false;
                }
            }
        }
        return true;
    }
};
