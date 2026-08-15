class Solution {
public:
    int longestSubsequence(vector<int>& nums) {

        int xorNum =0;
        int zeroCount =0;

        for(int n : nums){
            xorNum = xorNum^n;

            if(n ==0) zeroCount++;
        }

        if(xorNum != 0) return nums.size();
        if (zeroCount == nums.size()) return 0;

        return nums.size()-1;
    }
};