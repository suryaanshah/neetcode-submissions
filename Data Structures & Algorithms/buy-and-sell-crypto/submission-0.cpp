class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxprofit = 0;

        for (int i = 0; i < prices.size(); i++) {
            for (int j = i; j < prices.size(); j++) {
                if (prices[i] < prices[j]) {
                    maxprofit = max(maxprofit, prices[j]-prices[i]);
                }
            }
        }
        return maxprofit;
        
    }
};
