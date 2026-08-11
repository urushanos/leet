class Solution {
public:
    int missingInteger(vector<int>& nums) {
        //find longest prefix - starting from 0
        //after that find the smallest number greater than the prefix - which is not in array

        //if(nums.size() == 1) return nums[0]+1;

        int prefSum = nums[0];
        int i, j;

        for(i=1; i<nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                prefSum += nums[i];
            }
            else{
                break;
            }
        }
        int x = prefSum;

        while(true){
            bool found = false;
            for(int num : nums){
                if(x==num){
                    found = true;
                    break;
                }
            }
            if(!found) break;
            x++;
        }

        return x;
    }
};