class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int profit=0;
    int mini=prices[0];
    for(int i=0; i<prices.size(); i++)
    {
        int cost=prices[i]-mini;
        profit=max(profit,cost); 
        mini =min(mini,prices[i]);
    }
    return profit;

    }
};
