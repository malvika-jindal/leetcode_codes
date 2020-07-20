class Solution {
public:
    string addBinary(string a, string b) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int la=a.length()-1;
        int lb=b.length()-1;
        int n=min(la,lb);
        int carry=0;
        string ans="";
        for(int i=0;i<=n;i++)
        {
            if((a[la-i]-'0')+(b[lb-i]-'0')+carry==0)
                ans='0'+ans;
            else if((a[la-i]-'0')+(b[lb-i]-'0')+carry==1)
                ans='1'+ans,carry=0;
            else if((a[la-i]-'0')+(b[lb-i]-'0')+carry==2)
                ans='0'+ans,carry=1;
            else 
                ans='1'+ans,carry=1;
        }
        if(la>lb)
        {
            for(int i=n+1;i<=la;i++)
            {
                if(!((a[la-i]-'0')+carry))
                    ans='0'+ans;
                else if((a[la-i]-'0')+carry==1)
                    ans='1'+ans,carry=0;
                else if((a[la-i]-'0')+carry==2)
                    ans='0'+ans,carry=1;
            }
        }
        else
        {
            for(int i=n+1;i<=lb;i++)
            {
                if(!((b[lb-i]-'0')+carry))
                    ans='0'+ans;
                else if((b[lb-i]-'0')+carry==1)
                    ans='1'+ans,carry=0;
                else if((b[lb-i]-'0')+carry==2)
                    ans='0'+ans,carry=1;
            }
        }
        if(carry)
            ans='1'+ans;
        return ans;
    }
};
