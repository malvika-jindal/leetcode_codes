class Solution {
public:
  /*  int check(vector<int>& nums1, vector<int>& nums2, int a, int b, int sum)
    {
        if(a==0 || b==0)
        {
        ans=max(ans,)
            return ;
        }
        else
        {
            check(nums1,nums2,a-1,b-1,sum+nums1[a-1]*nums2[b-1]),
            check(nums1,nums2,a-1,b,sum),
            check(nums1,nums2,a,b-1,sum),
            check(nums1,nums2,a-1,b-1,sum);
        }
        ans=max(ans,dp[a][b]);
        return dp[a][b];
    }*/
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int ans=INT_MIN;
        //vector<vector<int>> dp;
        int dp[nums1.size()+1][nums2.size()+1];
        dp[0][0]=nums1[0]*nums2[0];
        for(int i=1;i<nums1.size();i++)
        {
            dp[i][0]=max(dp[i-1][0],nums1[i]*nums2[0]);
        }
        for(int i=1;i<nums2.size();i++)
        {
            dp[0][i]=max(dp[0][i-1],nums2[i]*nums1[0]);
        }
        for(int i=1;i<nums1.size();i++)
        {
            for(int j=1;j<nums2.size();j++)
            {
                dp[i][j]=nums1[i]*nums2[j];
                dp[i][j]=max(dp[i][j],max(dp[i-1][j-1]+dp[i][j],max(dp[i-1][j],dp[i][j-1])));
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
