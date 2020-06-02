//bag of tokens

class Solution {
public:
    int bagOfTokensScore(vector<int>& token, int P) {
        sort(token.begin(),token.end());
        int N=token.size();
        int start=0,end=N-1;
        int point=0,i=0;
        int ans=0;
        while(start<=end)
        {
            if(P>=token[start])
            {
                P-=token[start];
                start++;
                point++;
            }
            else
            {
                if(point==0)
                    return ans;
                point--;
                P+=token[end];
                end--;
            }
            ans=max(ans,point);
        }
        return ans;
    }
};
