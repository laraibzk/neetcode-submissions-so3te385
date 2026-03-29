class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res =0;
        int minBuy = prices[0];

        for( int i=0; i< prices.size();i++) {
            int sell = prices[i];
            res = max(res, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return res;
    }
};
