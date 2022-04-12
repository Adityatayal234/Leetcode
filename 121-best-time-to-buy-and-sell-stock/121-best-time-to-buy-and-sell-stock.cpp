class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int minSoFar = prices[0];
        int profit = 0;
        
        for(int i=0 ; i<prices.size() ; i++){
            minSoFar = min(prices[i],minSoFar);
            profit = max(profit, prices[i]-minSoFar);
        }
        
        return profit;
    }
};