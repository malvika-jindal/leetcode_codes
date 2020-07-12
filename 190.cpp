class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        uint32_t ans=0;
        for(int i=31;i>=0;i--)
        {
            ans+=pow(2,i)*(n&1);
            n=n>>1;
        }
        
        return ans;
    }
};
