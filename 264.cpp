class Solution {
public:
    vector<int>v;
    int i=0,j=0,k=0;
    int nthUglyNumber(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(v.size()==0)
            v.push_back(1);
        while(v.size()<=n)
        {
            int x=min(2*v[i],min(3*v[j],5*v[k]));
            if(v[v.size()-1]!=x)
                v.push_back(x);
            if(x==2*v[i])
                i++;
            else if(x==3*v[j])
                j++;
            else if(x==5*v[k])
                k++;
        }
        return v[n-1];
    }
};
