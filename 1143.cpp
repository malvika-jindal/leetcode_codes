/*int LCS(string text1, string text2, int m,int n)
{
    if(m==0 || n==0)
        return 0;
    else if(text1[m-1]==text2[n-1])
        return 1+LCS(text1,text2,m-1,n-1);
    else
        return max(LCS(text1,text2,m,n-1),LCS(text1,text2,m-1,n));
}
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length(),n=text2.length();
        return LCS(text1,text2,m,n);
    }
};*/

// The above recursive solution will be converted into top-down approach

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length(),n=text2.length();
        
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(text1[i-1]==text2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
};
