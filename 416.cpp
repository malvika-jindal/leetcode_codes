//knapsack
//top-down approach converted via recursion

class Solution {
public:
    bool canPartition(vector<int>& arr) {
	    int sum=0;
        int N=arr.size();
	    for(int i=0;i<N;i++)
	    {
	        sum+=arr[i];
	    }
	    if(sum%2==0)
	    {
	        sum=sum/2;
	        int dp[N+2][sum+2];
	        for(int i=0;i<=N;i++)
	        {
	            for(int j=0;j<=sum;j++)
	            {
	                if(j==0)
	                    dp[i][j]=1;
	                else if(i==0 && j!=0)
	                    dp[i][j]=0;
	                else if(arr[i-1]<=j)
	                    dp[i][j]=(dp[i-1][j])||(dp[i-1][j-arr[i-1]]);
	                else 
	                    dp[i][j]=dp[i-1][j];
	            }
	        }
	        if(dp[N][sum])
	            return 1;
	        else
	            return 0;
	    }
	    else
	    {
	        return 0;
	    }
	}
};
