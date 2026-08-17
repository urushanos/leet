class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //if(nums.size() ==1) return nums[0];

        int maxSum =nums[0], sum=nums[0];

        for(int i=1; i<nums.size(); i++){
            if (nums[i] > nums[i]+sum) sum = nums[i];
            else sum += nums[i];

            maxSum = max(maxSum, sum);
        }

        return maxSum;
    }
};