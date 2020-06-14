class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int start=0,end=nums.size()-1,ans=0;
        if(nums.size()==0)
            return 0;
        if(target<nums[0])
            return 0;
        while(start<=end)
        {
            int mid=(start+end)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                ans=mid,start=mid+1;
            else if(nums[mid]>target)
                end=mid-1;
        }
        return ans+1;
    }
};
