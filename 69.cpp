long long int ans(int x, long long int start, long long int end)
{
   long long int mid=(start+end)/2;
    if(mid*mid==x)
    {
        return mid;
    }
    else if((mid+1)*(mid+1)>x && (mid-1)*(mid-1)<x)
    {
        if(mid*mid>x)
        {
            return mid-1;
        }
        else
        {
            return mid;
        }
    }
    else if(mid*mid>x)
    {
        return ans(x,start,mid);
    }
    else
    {
        return ans(x,mid,end);
    }
}

class Solution {
public:
    int mySqrt(int x) {
        if(x==1 || x==0)
        {
            return x;
        }
        return ans(x,0,x);
    }
};
