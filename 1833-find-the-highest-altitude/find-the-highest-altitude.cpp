class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    int prev=0;
    int maxh=0, curr;

        for(int i=0; i<gain.size(); i++){
            curr = gain[i]+prev;
            maxh = max(maxh,curr);

            prev = curr;
        }

        return maxh;
    }
};