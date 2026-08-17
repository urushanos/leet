class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> soln;
        int maxCandy=0;

        for(int n : candies){
            maxCandy = max(maxCandy, n);
        }

        for(int i=0; i<candies.size(); i++){
            if (candies[i]+extraCandies >= maxCandy) soln.push_back(true);
            else soln.push_back(false);
        }

        return soln;
    }
};