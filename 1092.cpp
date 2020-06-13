//Just like how print LCS, by using the same concept you can print supersequence

string LCS(string str1,string str2, int m, int n)
{
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0;
            else if(str1[i-1]==str2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else 
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int l=dp[m][n];
    string ans="";
    int i=m,j=n;
    while(i>0 && j>0)
    {
        if(str1[i-1]==str2[j-1])
        {
            ans+=str1[i-1];
            i--,j--;
        }      
        else
        {
            if(dp[i-1][j]>dp[i][j-1])
                ans+=str1[i-1],i--;
            else
                ans+=str2[j-1], j--;
        }
    }
    while(i>0)
    {
        ans+=str1[i-1],i--;
    }
    while(j>0)
    {
        ans+=str2[j-1],j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.length(),n=str2.length();
        string lcs=LCS(str1,str2,m,n);
       
        return lcs;
    }
};
