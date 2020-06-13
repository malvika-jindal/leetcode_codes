//Same as LCS

class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int dp[A.size()+1][B.size()+1];
        int maxi=0;
        for(int i=0;i<=A.size();i++)
        {
            for(int j=0;j<=B.size();j++)
            {
                if(i==0 || j==0)
                    dp[i][j]=0;
                else if(A[i-1]==B[j-1])
                    dp[i][j]=1+dp[i-1][j-1],maxi=max(maxi,dp[i][j]);
                else
                    dp[i][j]=0;
            }
        }
        return maxi;
    }
};
