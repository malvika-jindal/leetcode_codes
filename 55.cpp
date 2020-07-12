class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=nums.size();
        int start=0,end=0;
        while(end<n)
        {
            if(end>=n-1)
                return true;
            if(start>end)
                return false;
            else
                end=max(start+nums[start],end);
            start++;
        }
        if(end>=n-1)
            return true;
        return false;
    }
};
