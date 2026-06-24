class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int bars=0, amt=0;
        sort(costs.begin(), costs.end());

        for(int i=0; i<costs.size(); i++){
            int temp = costs[i]+ amt;
            if(temp <= coins){
                amt += costs[i];
                bars++;
            }
        }       

        return bars;
    }
};