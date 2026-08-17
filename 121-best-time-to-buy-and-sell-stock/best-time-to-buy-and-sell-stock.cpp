class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minSoFar = prices[0], maxProfit =0;

        for(int i=0; i<prices.size(); i++){
            minSoFar = min(prices[i], minSoFar);

            if(prices[i] == minSoFar) continue;

            maxProfit = max(maxProfit, prices[i]-minSoFar);
        }

        return maxProfit;
    }
};