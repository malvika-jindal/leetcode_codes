double func(double x, long long int n)
{
     if(n==1)
        return x;
    else if(n%2==0)
    {
        double ans=func(x,n/2);
        return ans*ans;
    }
    else
    {
        double ans=func(x,n/2);
        return ans*ans*x;
    }
}

class Solution {
public:
    double myPow(double x, long long int n) {
        if(n==0)
        {
            return 1;
        }
       else if(n<0)
       {
           return (1/func(x,-n));
       }
        else
        {
            return func(x,n);
        }
        return 1;
    }
};
