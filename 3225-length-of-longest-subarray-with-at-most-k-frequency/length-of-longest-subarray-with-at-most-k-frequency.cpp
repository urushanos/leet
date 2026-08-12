class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        //freq <= k means good
        unordered_map <int, int> freq; //num : freq
        int l=0, r=0;
        int maxlen=0;

        while(r<nums.size()){

            freq[nums[r]]++;

            while(freq[nums[r]] > k){
                freq[nums[l]]--;
                l++;
            }
        
            maxlen = max(maxlen, r-l+1);
            r++;
        }

        return maxlen;

    }
};