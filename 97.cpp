class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int a=s1.length();
        int b=s2.length();
        int l=s3.length();
        bool dp[l+1][a+1][b+1];
        
        for(int i=0;i<=l;i++)
        {
            for(int j=0;j<=a;j++)
            {
                for(int k=0;k<=b;k++)
                {
                    if(i==0 && (j!=0 || k!=0))
                    {
                        dp[i][j][k]=false;
                    }
                    else if(i==0 && j==0 && k==0)
                    {
                        dp[i][j][k]=true;
                    }
                    else if(k==0 && j==0)
                    {
                        dp[i][j][k]=false;
                    }
                    else if(j==0)
                    {
                        if(s3[i-1]==s2[k-1])
                            dp[i][j][k]=dp[i-1][j][k-1];
                        else
                            dp[i][j][k]=false;
                    }
                    else if(k==0)
                    {
                        if(s3[i-1]==s1[j-1])
                            dp[i][j][k]=dp[i-1][j-1][k];
                        else
                            dp[i][j][k]=false;
                    }
                    else
                    {
                        if(s3[i-1]==s1[j-1] && s3[i-1]==s2[k-1])
                            dp[i][j][k]=dp[i-1][j-1][k] || dp[i-1][j][k-1];
                        else if(s3[i-1]==s1[j-1])
                            dp[i][j][k]=dp[i-1][j-1][k];
                        else if(s3[i-1]==s2[k-1])
                            dp[i][j][k]=dp[i-1][j][k-1];
                        else
                            dp[i][j][k]=false;
                    }
                }
            }
        }
        return dp[l][a][b];
    }
};
