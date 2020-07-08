class Solution {
public:
    long long int ans=0;
    long long int check(long long int start,long long int end,long long int key)
    {
        if(start>end)
            return ans;
        long long int mid=(start+end)/2;
        long long int x=(mid*(mid+1))/2;
        if(x==key)
        {
            ans=mid;
            return mid;
        }
        else if(x<key)
        {
            ans=max(ans,mid);
             return check(mid+1,end,key);
        }
        else
        {
             return check(start,mid-1,key);
        }
        return ans;
    }
    int arrangeCoins(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(n==1)
            return 1;
        check(0,n,n);
        return ans;
    }
};
