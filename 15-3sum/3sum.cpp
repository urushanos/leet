class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> soln;

        for(int i=0; i<nums.size(); i++){
            if(i>0 && nums[i-1]==nums[i]) continue; //if i same as prev, go next it

            int j=i+1, k=nums.size()-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];

                if(sum<0){
                    j++; //atleast once, if no dupes
                }

                else if(sum >0){
                    k--;
                }

                else{
                    soln.push_back({nums[i],nums[j],nums[k]});

                    j++;
                    //k--;

                    //correction - skip duplicates only after finding sum
                    while(j<k && nums[j]==nums[j-1]){
                        j++;
                    }
                }
            }
        }

        return soln;

    }
};