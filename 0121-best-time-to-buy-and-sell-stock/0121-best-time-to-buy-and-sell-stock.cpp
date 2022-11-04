class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = prices[0];
        int ans = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] > sell){
                sell = prices[i];
            }else if(prices[i] < buy){
                buy = prices[i];
                sell = prices[i];
            }
            ans = max(ans, sell-buy);
        }

        return ans;
        
    }
};