class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int start=0, end=1;
        //its a for loop where u r comparing adjacent prices only
        while(end<prices.size())
        {
            if(prices[start]<prices[end])
                maxprofit+=-prices[start]+prices[end];
                
            start=end;
            end++;
        }
        return maxprofit;
      //  return profit;
    }
};
