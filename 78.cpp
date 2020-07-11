class Solution {
public:
    vector<vector<int>> ans;
    void check(vector<int>input,vector<int>nums, int n)
    {
        if(n==0)
        {
            ans.push_back(input);
        }
        else
        {
            check(input,nums,n-1);
            input.push_back(nums[n-1]);
            check(input,nums,n-1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;;
        check(temp,nums,nums.size());
        return ans;
    }
};
