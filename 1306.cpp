class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=arr.size();
        int dp[n];
        if(!arr[start])
            return true;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                dp[i]=2;
            else
                dp[i]=0;
        }
        dp[start]=1;
        queue<int>q;
        q.push(start);
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            if(dp[x]==2)
                return true;
            if(x+arr[x]<n && (!dp[x+arr[x]] || dp[x+arr[x]]==2))
                q.push(x+arr[x]),dp[x+arr[x]]=max(1,dp[x+arr[x]]);
            if(x-arr[x]>=0 && (!dp[x-arr[x]] || dp[x-arr[x]]==2))
                q.push(x-arr[x]),dp[x-arr[x]]=max(1,dp[x-arr[x]]);
        }
        return false;
    }
};
