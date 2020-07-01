class KthLargest {
public:
   
    int K;
    priority_queue<int>p;
    int maxi=INT_MIN;
    KthLargest(int k, vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        K=k;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            p.push(-nums[i]);
        }
        for(int i=0;i<(n-K);i++)
        {
            p.pop();
        }
    }
    
    int add(int val) {
        if(val>=maxi)
            p.push(-val);
        if(p.size()>K)
            p.pop();
        int x=-p.top();
        maxi=max(maxi,x);
        return x;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
