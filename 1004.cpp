class Solution {
public:
    int longestOnes(vector<int>& A, int K) {
       // ios_base::sync_with_stdio(false);
        //cin.tie(NULL);
        int start=0,end=0,k=K,ans=0;
        while(end<A.size())
        {
            if(!A[end])
            {
                k--;
            }
            if(k<0)
            {
                ans=max(end-start,ans);
                while(k<0)
                {
                    if(!A[start])
                    {
                        k++;
                        start++;
                        break;
                    }
                    else
                    {
                        start++;
                    }
                }
            }
            ans=max(end-start,ans);
            end++;
        }
        ans=max(end-start,ans);
        return ans;
    }
};
