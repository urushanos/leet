class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> soln;

        //soln[0] =0;
        int maxalt = 0;

        int sum, prevsum=0;
        for(int i=0; i<gain.size(); i++){
            sum = prevsum + gain[i];
            maxalt = max(sum, maxalt);

            prevsum = sum;
        }

        return maxalt;
    }
};