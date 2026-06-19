class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int prev=0,maxh=0;

        for(int i=0; i<gain.size(); i++){
            prev+=gain[i];
            maxh = max(maxh,prev);

            //prev = curr;
        }

        return maxh;
    }
};