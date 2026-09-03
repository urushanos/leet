class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        //soln - vector of size n(spells arr size) - pairs[i]= num of potions which form successful
        // pair with ith spell

        int n = spells.size();
        int m = potions.size();
        vector<int> pairs(n);

        sort(potions.begin(), potions.end());

        for(int i=0; i<n; i++){
            int l=0, r=m-1;

            long long prod;
            while(l <= r){
                int mid = l+(r-l)/2;
                long long prod = (long long)spells[i]* (long long)potions[mid];
                if(prod >= success){
                    r = mid-1;
                }
                else{
                    l = mid+1;
                }
            }
            pairs[i] = m-l;
        }

        return pairs;
    }
};