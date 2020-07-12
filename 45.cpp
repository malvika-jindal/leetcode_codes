class Solution {
public:
    int jump(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n=nums.size();
        int start=0,end=0;
        int count=0;
        while(end<n)
        {
            if(end>=n-1)
                return count;
            int maxi=0;
            for(int i=start;i<=end;i++)
                maxi=max(maxi,i+nums[i]);
            if(end<maxi)
                count++,end=maxi;
            start++;
        }
        return count;
    }
};
