class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<int>p;
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(maxi<nums[i])
                p.push(-nums[i]),count++;
            if(count>k)
            {
                maxi=max(maxi,-p.top());
                p.pop();
                count--;
            }
        }
        return (-p.top());
    }
};
