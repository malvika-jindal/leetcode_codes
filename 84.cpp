//largest histogram area
//16ms; time complexity O(n^2)

#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(arr.size()==0)
        {
            return 0;
        }
        stack<pair<ll int,int>>right;
	    stack<pair<ll int,int>>left;
        ll int N=arr.size();
	    ll int r[N];
	    ll int ans=0;
	    right.push({arr[N-1],N-1});
	    r[N-1]=N;
	    left.push({arr[0],0});
	    for(ll int i=N-2;i>=0;i--)
	    {
	        
            while(!right.empty() && right.top().first>=arr[i])
                right.pop();
            
            if(right.empty())
                r[i]=N;
            else
                r[i]=right.top().second;
                
	        right.push({arr[i],i});
	    }
	    
	   ans=arr[0]*(abs(r[0]));
	   
	   ll int index=0;
	    for(int i=1;i<N;i++)
	    {
            while(!left.empty() && left.top().first>=arr[i])
                left.pop();
            
            if(left.empty())
                index=-1;
            else
                index=left.top().second;
               
	        left.push({arr[i],i});
            ans=max(ans,arr[i]*(r[i]-index-1));
	    }
        return ans;
    }
};
