class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0, ans=0, count=0;

        for(int r=0; r<nums.size(); r++){
            if(nums[r]==0) count++;

            while(count>1){
                if(nums[l] == 0) 
                    count--;
                l++;
            }
            
            ans = max(r-l+1, ans);
        }

        return ans-1;
    }
};