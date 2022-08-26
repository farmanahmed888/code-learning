class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0;
        int current = prices[0];
        int profit = 0;
        for(int i = 1; i < prices.size(); i++){
            if(prices[i] - current > 0){
                profit = prices[i] - current;    
            }else{
                current = prices[i];
            }
            if(profit > maxi) maxi = profit;
        }
        return maxi;
    }
};