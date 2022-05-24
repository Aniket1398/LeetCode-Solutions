class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int profit=0;
        int sell_today=0;
        int n=prices.size();
        for(int i=0;i<n;++i)
        {
            if(prices[i]<mini)
            {
                mini=prices[i];
            }
            sell_today=prices[i]-mini;
            if(profit<sell_today)
            {
                profit=sell_today;
            }
        }
        return profit;
        
    }
};