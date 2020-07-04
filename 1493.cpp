class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int ans=0;
        int left=0,right=0;
        int i=0;
        while(i<nums.size()&&nums[i])
            right++,i++;
        while(i<nums.size())
        {
            left=right;
            right=0;
            if(!nums[i])
            {
                i++;
                while(i<nums.size()&&nums[i])
                    right++,i++;
                ans=max(ans,left+right);
            }
        }
        ans=max(ans,left+right);
        if(ans==nums.size())
            return ans-1;
        return ans;
    }
};
