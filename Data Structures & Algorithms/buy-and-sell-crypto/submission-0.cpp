class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int cp=prices[0];
        for(int i=0;i<prices.size();i++){
            int profit=prices[i]-cp;
            cp=min(prices[i], cp);
            maxprofit=max(profit, maxprofit);
            
        }
        return maxprofit;
    }
};
