class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int closestSum = nums[0]+nums[1]+nums[nums.size()-1];

        for(int i=0; i<nums.size(); i++){
            int j=i+1;
            int k=nums.size()-1;

            while(j<k){
               int sum = nums[i]+nums[j]+nums[k];
               int diff = target-sum;

               if(abs(diff) < abs(closestSum-target)){
                    closestSum = sum;
               }
                if(diff<0) k--;
                else j++;
            }
        }

        return closestSum;
    }
};