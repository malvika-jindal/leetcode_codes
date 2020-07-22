class Solution {
public:
    long long int m=1000000007;
    long long int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        int a=horizontalCuts[0],b=verticalCuts[0];
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        for(long long int i=1;i<horizontalCuts.size();i++)
        {
            a=max(a,horizontalCuts[i]-horizontalCuts[i-1]);
        }
        for(long long int i=1;i<verticalCuts.size();i++)
        {
            b=max(b,verticalCuts[i]-verticalCuts[i-1]);
        }
        return (a%m*b%m)%m;
    }
};
