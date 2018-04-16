class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, profit = 0;
        if (prices.size() != 0){
            int pin = prices[0];
        
            for (i = 1; i < prices.size(); i++){
                if (prices[i] < pin ){
                    pin = prices[i];
                }
                else if (prices[i] > pin){
                    profit += prices[i] - pin;
                    pin = prices[i];
                }
            }
        }
        return profit;
    }
};
