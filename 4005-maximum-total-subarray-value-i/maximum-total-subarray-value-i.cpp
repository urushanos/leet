class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        //vector<int> value;
        long long min=nums[0], max=nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]> max) max=nums[i];
            if(nums[i]<min ) min=nums[i];
        }

        return (max-min)*k;
    }
};