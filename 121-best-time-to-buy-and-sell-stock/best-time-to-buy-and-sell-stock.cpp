class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int rmin = prices[0],  maxDiff=0;

        for(int i=0; i<prices.size(); i++){
            if(prices[i] < rmin) rmin=prices[i];

            maxDiff = max(prices[i]-rmin, maxDiff);
        }
        return maxDiff;
    }
};