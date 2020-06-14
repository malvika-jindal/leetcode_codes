//12ms; better than 86% solutions
//time complexity:O(N);

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(nums.size()==0)
             return 0;
        int start=0,end=0,sum=nums[0],ans=INT_MAX;  
        while(end<nums.size())
        {
            if(start==end && sum==s)
            {
                return 1;
            }
            else if(sum<s)
            {
                if(end<nums.size()-1)
                    end++,sum+=nums[end];
                else if(ans==INT_MAX)
                    return 0;
                else 
                    return ans;
            }
            else if(sum>s)
            {
                ans=min(ans,end-start+1);
                if(ans==1)
                    return 1;
                sum-=nums[start],start++;
            }
            else if(sum==s)
            {
                ans=min(ans,end-start+1);
                sum-=nums[start],start++;
            }
        }
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};
