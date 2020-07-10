class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int count=0;
        int x=INT_MAX;
        sort(A.begin(),A.end());
       for(int i=0;i<A.size();i++)
       {
           if(A[i]<0)
           {
               if(K>0)
                   A[i]=-A[i],K--;
               else
                   break;
           }
           else
           {
               break;
           }
       }
        int sum=0;
        if(!K|| !(K%2))
        {
            for(int i=0;i<A.size();i++)
                sum+=A[i];
            return sum;
        }
        sort(A.begin(),A.end());
        for(int i=0;i<A.size();i++)
        {
            if(!i)
                sum-=A[i];
            else
                sum+=A[i];
        }
        return sum;
    }
};
